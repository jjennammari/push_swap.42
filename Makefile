# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jemustaj <jemustaj@student.42Porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/15 17:41:43 by jemustaj          #+#    #+#              #
#    Updated: 2025/09/18 19:29:05 by jemustaj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
LIBFT = ./libft/libft.a
CC = cc
CFLAGS = -g -Wall -Wextra -Werror
COMPILE_O = $(CC) $(CFLAGS) -c $< -o $@
AR = ar -rcs
RM = rm -rdf
RM_LIBFT = ./libft/libft.a ./libft/*.o

SRC = array_helper.c big_sort_stack.c binary_helper.c create_stack.c \
	  error_exit.c push.c reverse_rotate.c rotate.c sort_stack.c \
	  sort_helper.c stack_helper.c swap.c tiny_sort_stack.c main.c

OBJS = $(SRC:.c=.o)

%.o: %.c
	$(COMPILE_O)

all: $(NAME)

$(LIBFT):
	@make -C libft

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(LIBFT) $(OBJS) -o $(NAME) -I./libft
	@echo ">>> $(NAME) created <<<"

clean:
	$(RM) $(RM_LIBFT)
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
