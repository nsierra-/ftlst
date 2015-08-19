/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_destroy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/12 03:54:38 by nsierra-          #+#    #+#             */
/*   Updated: 2015/04/12 03:54:42 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlst.h"
#include <stdlib.h>

void			*node_destroy(t_node **node)
{
	t_node		*node_;
	t_node		*left;
	t_node		*right;
	void		*ret;

	node_ = *node;
	if (!(node_->next == node_))
	{
		left = node_->prev;
		right = node_->next;
		left->next = right;
		right->prev = left;
	}
	ret = node_->data;
	free(node_);
	*node = NULL;
	return (ret);
}
