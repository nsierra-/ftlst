/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_push_front.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/12 03:56:12 by nsierra-          #+#    #+#             */
/*   Updated: 2015/04/12 03:56:28 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlst.h"
#include "ftlst_node.h"

int						lst_push_front(t_lst *lst, void *data)
{
	t_node				*node;

	if (!(node = new_node(data)))
		return (0);
	else if (lst_is_empty(lst))
	{
		node->prev = node;
		node->next = node;
		lst->first = node;
		return (++lst->size);
	}
	node_insert_between(node, lst_node_back(lst), lst_node_front(lst));
	lst->first = node;
	return (++lst->size);
}
