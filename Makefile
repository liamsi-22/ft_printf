# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pclaus <pclaus@student.s19.be>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/17 18:03:33 by pclaus            #+#    #+#              #
#    Updated: 2023/12/09 12:53:05 by iel-fagh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_putchar.c ft_printf.c ft_strchr.c ft_putnbr.c ft_putstr.c ft_hex_lower.c ft_hex_upper.c ft_unsigned_int.c 

OBJ = $(SRC:.c=.o)

CC = cc

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all




