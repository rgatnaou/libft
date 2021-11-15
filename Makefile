# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgatnaou <rgatnaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 11:36:40 by rgatnaou          #+#    #+#              #
#    Updated: 2021/11/14 17:01:37 by rgatnaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC =   ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_memcmp.c		\
		ft_memset.c		\
		ft_strlen.c		\
		ft_strnstr.c	\
		ft_tolower.c	\
		ft_bzero.c		\
		ft_isalpha.c	\
		ft_isdigit.c	\
		ft_memchr.c		\
		ft_memcpy.c		\
		ft_strchr.c		\
		ft_strlcpy.c	\
		ft_strncmp.c	\
		ft_strrchr.c	\
		ft_toupper.c	\
		ft_strlcat.c	\
		ft_memmove.c	\
		ft_atoi.c		\
		ft_calloc.c		\
		ft_strdup.c		\
		ft_substr.c		\
		ft_strjoin.c	\
		ft_strtrim.c	\
		ft_putnbr_fd.c	\
		ft_putchar_fd.c	\
		ft_itoa.c		\
		ft_strmapi.c	\
		ft_striteri.c	\
		ft_putstr_fd.c	\
		ft_putendl_fd.c	\
		ft_split.c		\
		ft_striteri.c


OBJECTS = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

