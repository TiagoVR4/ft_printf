# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tiagalex <tiagalex@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/09 12:49:44 by tiagalex          #+#    #+#              #
#    Updated: 2025/01/09 14:02:10 by tiagalex         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC	= cc
CFLAGS = -Wall -Wextra -Werror

SRC	=	ft_printf.c  ft_handle.c ft_putchar.c ft_putstr.c ft_strlen.c \
		ft_puthex.c ft_putptr.c ft_putnbr.c ft_unsigned_putnbr.c \
		ft_memcpy.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re