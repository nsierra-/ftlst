/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftlst_node.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/12 05:50:49 by nsierra-          #+#    #+#             */
/*   Updated: 2015/04/12 05:50:50 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTLST_NODE_H
# define FTLST_NODE_H

# include "ftlst.h"

typedef void	*t_supernorm;
/*
** Creates a new list node. Sets all pointers to NULL.
*/
t_node			*new_node(void *data);
/*
** Inserts to_insert between before and after, editing pointers
** accordingly.
*/
void			node_insert_between(
					t_node *to_insert,
					t_node *before,
					t_node *after);
/*
** Swaps data of node1 and node2.
*/
void			node_swap(t_node *node1, t_node *node2);
/*
** Destroys node, setting pointers to it's neighbours nodeents correctly.
*/
void			*node_destroy(t_node **node);

#endif
