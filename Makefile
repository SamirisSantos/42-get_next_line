# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/15 14:28:22 by sade-ara          #+#    #+#              #
#    Updated: 2025/04/15 14:35:25 by sade-ara         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
RM = rm -rf
CC = cc
CFLAGS = Wextra Werror Wall -g
SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_memset.c ft_strcat.c ft_strlcpy.c \
		ft_strlen.c ft_tolower.c ft_toupper.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all