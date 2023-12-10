# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pclaus <pclaus@student.s19.be>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/17 18:03:33 by pclaus            #+#    #+#              #
#    Updated: 2023/12/10 09:51:09 by iel-fagh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_putchar.c ft_strchr.c ft_putnbr.c ft_putstr.c ft_hex_lower.c ft_hex_upper.c ft_unsigned_int.c 

OBJ = $(SRC:.c=.o)

CC = cc

RV = rm

CFLAGS = -Wall -Wextra -Werror

LIB = ar -rc

all : $(NAME)

$(NAME) : $(OBJ)
	$(LIB) $@ $^

.o : .c
	$(CC) $(CFALGS) -c $^ -o $@

clean:
	$(RV) -rf $(OBJ)

fclean: clean
	$(RV) -rf $(NAME)

re: fclean all
