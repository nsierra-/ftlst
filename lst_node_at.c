/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_node_at.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/12 03:55:45 by nsierra-          #+#    #+#             */
/*   Updated: 2015/04/12 03:56:28 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlst.h"

static t_node		*reg_search(t_lst *lst, size_t pos)
{
	t_node			*cursor;
	size_t			i;

	cursor = lst_node_front(lst);
	i = 0;
	while (i++ < pos)
		cursor = cursor->next;
	return (cursor);
}

static t_node		*rev_search(t_lst *lst, size_t pos, size_t offset)
{
	t_node			*cursor;

	cursor = lst_node_back(lst);
	while (offset-- > pos)
		cursor = cursor->prev;
	return (cursor);
}

t_node				*lst_node_at(t_lst *lst, size_t pos)
{
	size_t			lsize;

	lsize = lst_get_size(lst);
	if (pos >= lsize)
		return (NULL);
	else if (pos == 0)
		return (lst_node_front(lst));
	else if (pos == lsize - 1)
		return (lst_node_back(lst));
	else if (pos <= (lsize / 2))
		return (reg_search(lst, pos));
	else
		return (rev_search(lst, pos, lsize - 1));
}
