# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achivela <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/19 17:32:04 by achivela          #+#    #+#              #
#    Updated: 2024/06/19 17:32:08 by achivela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

vpath %.c srcs

NAME = push_swap

CC = cc
FLAGS = -O3 -g3 -L -lft
CFLAGS = -Wall -Wextra -Werror -g 

LIBFT = ./libft
LIBS = /include

RM = rm -f
FILES = push_swap.c \
		input_error.c \
		linked_list_a.c \
		linked_list_b.c \
		sorting.c \
		moves_swap.c \
		check_list.c \
		sort_four.c \
		sort_three.c \
		sort_two.c \
		moves_rotate.c \
		moves_rev_rotate.c \
		moves_push.c \
		find_cheapest.c \
		check_max_min_b.c \
		check_max_min_a.c \
		checks_cheapest.c \
		free_all.c \
		move_back.c \
		new_min_stack_a.c \
		new_max_stack_a.c \
		new_elem_stack_a.c \
		new_in_stack_b.c

OBJ_DIR = build

OBJS = $(addprefix $(OBJ_DIR)/, $(FILES:.c=.o)) 

green = \033[32m
reset = \033[0m

all: $(NAME)

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -I.$(LIBS) -c $< -o $@

$(NAME): $(OBJS)
	make -C $(LIBFT)
	$(CC) $(OBJS) $(CFLAGS) $(LIBFT)/libft.a -O3 -g3 -L -lft -o $(NAME)


$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	make clean -C $(LIBFT)
	$(RM) $(OBJS)

fclean: clean
	make fclean -C $(LIBFT)
	$(RM) $(NAME)

re: fclean all


.PHONY: all clean fclean
