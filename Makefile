# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/22 19:54:32 by nsierra-          #+#    #+#              #
#    Updated: 2015/11/24 15:32:49 by nsierra-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libftlst.a

SRC =		node_destroy.c \
			node_insert_between.c \
			node_swap.c \
			lst_bubble_sort.c \
			lst_clear.c \
			lst_data_at.c \
			lst_data_back.c \
			lst_data_front.c \
			lst_destroy.c \
			lst_node_at.c \
			lst_node_back.c \
			lst_node_front.c \
			lst_get_size.c \
			lst_insert.c \
			lst_is_empty.c \
			lst_pop_back.c \
			lst_pop_front.c \
			lst_print.c \
			lst_push_back.c \
			lst_push_front.c \
			lst_remove.c \
			lst_swap.c \
			lst_iterator_next.c \
			lst_change_first_by_pos.c \
			lst_change_first_by_node.c \
			new_lst.c \
			new_node.c \
			new_lstiter.c \
			init_iter.c \
			lst_index_of.c \
			lst_remove_iterator_node.c


OBJ = 		$(SRC:.c=.o)

CC = 		gcc

CFLAGS = 	-pedantic -ansi -Wall -Wextra -Werror -O2

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -I. -c $(SRC)
	ar rc  $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

test: all
	gcc $(CFLAGS) -L./ -lftlst -o test test_main.c
	./test
	rm -f test

re: fclean all
