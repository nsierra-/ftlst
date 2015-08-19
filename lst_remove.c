/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_remove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/12 03:56:15 by nsierra-          #+#    #+#             */
/*   Updated: 2015/04/12 03:56:28 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlst.h"
#include "ftlst_node.h"

void					*lst_remove(t_lst *lst, size_t pos)
{
	t_node				*cursor;

	if (pos >= lst_get_size(lst))
		return (0);
	cursor = lst_node_at(lst, pos);
	if (pos == 0)
		lst->first = cursor->next;
	if (lst_node_front(lst) == lst_node_back(lst))
		lst->first = NULL;
	--lst->size;
	return (node_destroy(&cursor));
}
