# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/08 16:07:54 by im_ane            #+#    #+#              #
#    Updated: 2024/08/20 16:35:19 by yessemna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror


SRCS = ft_printf.c \
	ft_printhex.c \
	ft_putchar.c \
	ft_putnbr_unsigned.c \
	ft_putnbr.c \
	ft_putstr.c \
	ft_printaddress.c \

OBJS = $(SRCS:.c=.o)

all : $(NAME)

%.o : %.c ft_printf.h
	cc $(CFLAGS) $< -o $@

$(NAME) : $(OBJS)
		ar -rc $(NAME) $(OBJS)

clean :
		rm -f $(OBJS)
		
fclean : clean
		rm -f $(NAME)
		
re : fclean all

.PHONY :clean fclean
