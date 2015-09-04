/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/12 03:56:09 by nsierra-          #+#    #+#             */
/*   Updated: 2015/04/12 07:46:01 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlst.h"
#include <stdio.h>

static void				print_size(t_lst *lst)
{
	printf("Total size : ");
	printf("%d\n", (int)lst_get_size(lst));
}

void					lst_print(t_lst *lst, void (*print_f)(void *), int mode)
{
	t_node				*cursor;
	size_t				i;
	size_t				lsize;

	cursor = lst_node_front(lst);
	i = 0;
	lsize = lst_get_size(lst);
	while (i++ < lsize)
	{
		if (mode == 1)
		{
			puts("----------");
			printf("Position : ");
			printf("%d\n", (int)(i - 1));
			printf("Data : ");
		}
		print_f(cursor->data);
		if (mode == 0)
			puts("");
		if (mode == 1)
			puts("\n----------");
		cursor = cursor->next;
	}
	if (mode == 1)
		print_size(lst);
}
