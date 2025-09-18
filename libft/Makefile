# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 16:02:58 by jemustaj          #+#    #+#              #
#    Updated: 2024/12/01 18:37:57 by jemustaj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
EXEC = a.out

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar -rcs
RM = rm -rf

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
       ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
       ft_strncmp.c ft_strnstr.c ft_memcpy.c ft_memmove.c ft_memset.c \
       ft_bzero.c ft_memchr.c ft_toupper.c ft_tolower.c ft_memcmp.c \
       ft_atoi.c ft_calloc.c ft_strdup.c \
       ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
       ft_substr.c ft_split.c ft_strjoin.c ft_strtrim.c ft_itoa.c \
       ft_strmapi.c ft_striteri.c
OBJS = $(SRC:.c=.o)

TEST_SRC = main.c
TEST_OBJS = $(TEST_SRC:.c=.o)

all: $(NAME)

exec: test
	./$(EXEC)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	@echo ">>> $(NAME) archive created <<<"

test: $(NAME) $(OBJS) $(TEST_OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(TEST_OBJS)

clean:
	$(RM) $(OBJS)
	$(RM) $(TEST_OBJS)

fclean: clean
	$(RM) $(EXEC)
	$(RM) $(NAME)

re: fclean all
