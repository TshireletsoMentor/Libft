# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmentor <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/23 10:16:38 by tmentor           #+#    #+#              #
#    Updated: 2019/06/08 16:06:41 by tmentor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SOURCES = *.c

OBJECTS = *.o

LIB = libft.h

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SOURCES) -I $(LIB)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
