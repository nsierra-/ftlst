/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/12 03:55:01 by nsierra-          #+#    #+#             */
/*   Updated: 2015/04/12 03:55:07 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlst.h"

void		node_swap(t_node *node1, t_node *node2)
{
	void	*tmp;

	tmp = node1->data;
	node1->data = node2->data;
	node2->data = tmp;
}
