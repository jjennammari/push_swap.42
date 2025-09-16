# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/15 17:41:43 by jemustaj          #+#    #+#              #
#    Updated: 2025/09/15 18:31:26 by jemustaj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
LIBFT = ./libft/libft.a
CC = cc
CFLAGS = -g -Wall -Wextra -Werror -I./libft
COMPILE_O = $(CC) $(CFLAGS) -c $< -o $@
AR = ar -rcs
RM = rm -rf

SRC = array_helper.c big_sort_stack.c binary_helper.c create_stack.c \
	  error_exit.c push.c reverse_rotate.c rotate.c \
	  sort_helper.c stack_helper.c swap.c tiny_sort_stack.c main.c print_stack.c

OBJS = $(SRC:.c=.o)

%.o: %.c
	$(COMPILE_O)

all: $(NAME)

$(LIBFT):
	@make -C libft

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)
	@echo ">>> $(NAME) created <<<"

clean:
	$(RM) $(OBJS)
	$(RM) $(TEST_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
