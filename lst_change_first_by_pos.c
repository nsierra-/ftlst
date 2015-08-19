/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_change_first_by_pos.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/21 00:41:38 by nsierra-          #+#    #+#             */
/*   Updated: 2015/04/21 00:41:39 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlst.h"

void			lst_change_first_by_pos(t_lst *lst, size_t pos)
{
	t_node		*node;

	if (!(node = lst_node_at(lst, pos)))
		return ;
	lst_change_first_by_node(lst, node);
}
