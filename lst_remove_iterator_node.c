/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_remove_iterator_node.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/21 12:47:02 by nsierra-          #+#    #+#             */
/*   Updated: 2015/09/21 12:47:03 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ftlst.h"
#include "ftlst_node.h"

void		*lst_remove_iterator_node(t_lstiter *it)
{
	void	*data;
	size_t	pos;
	t_node	*node;

	node = it->current;
	pos = it->pos;
	lst_iterator_next(it);
	it->flag = 2;
	data = lst_remove(it->lst, pos);
	if (node == it->end)
		init_iter(it, it->lst, it->dir);
	else
		it->pos = pos;
	return (data);
}
