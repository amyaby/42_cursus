# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/24 14:17:46 by iabasala          #+#    #+#              #
#    Updated: 2024/09/24 22:53:36 by im_ane           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS  =ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_calloc.c ft_strdup.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strmapi.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRCB = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJS = ${SRCS:.c=.o}
OBJB = ${SRCB:.c=.o}
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

bonus: ${OBJB}
	ar rc ${NAME} ${OBJB}

clean:
	${RM} ${OBJS} ${OBJB}

fclean: clean
	${RM} ${NAME}

re: fclean all
