# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: im_ane <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/30 18:49:34 by im_ane            #+#    #+#              #
#    Updated: 2024/07/06 16:18:30 by im_ane           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDE = libft.h
NAME = libft.a
SRCS = ft_isascii.c \
ft_isalpha.c \
ft_isdigit.c \
ft_isprint.c \
ft_isalnum.c \
ft_strlen.c \
ft_memset.c \
ft_bzero.c \
ft_memcpy.c \
ft_memmove.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_toupper.c \
ft_tolower.c \
ft_strchr.c \
ft_strrchr.c \
ft_strncmp.c \
ft_memchr.c \
ft_memcmp.c \
ft_strnstr.c \
ft_atoi.c \
ft_itoa.c \
ft_calloc.c \
ft_strdup.c \
ft_substr.c \
ft_strjoin.c \
ft_strtrim.c \
ft_split.c \
ft_striteri.c \
ft_strmapi.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putnbr_fd.c \
ft_putendl_fd.c
SRCSB = ft_lstnew_bonus.c \
ft_lstadd_front_bonus.c \
ft_lstsize_bonus.c \
ft_lstlast_bonus.c \
ft_lstadd_back_bonus.c \
ft_lstdelone_bonus.c \
ft_lstclear_bonus.c \
ft_lstiter_bonus.c \
ft_lstmap_bonus.c
OBJS = $(SRCS:.c=.o)
OBJSB = $(SRCSB:.c=.o)
all: $(NAME)
$(NAME): $(INCLUDE) $(OBJS)
	ar rcs $(NAME) $(OBJS)
bonus: $(INCLUDE) $(OBJSB) $(OBJS)
	ar rcs $(NAME) $(OBJSB) $(OBJS)
%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS) $(OBJSB)
fclean:
	rm -f $(NAME) $(OBJS) $(OBJSB)
re: fclean all

.PHONY: all clean fclean re bonus
