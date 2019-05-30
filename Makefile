# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmentor <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/23 10:16:38 by tmentor           #+#    #+#              #
#    Updated: 2019/05/30 10:28:05 by tmentor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SOURCES = *.c

OBJECTS = *.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SOURCES)
	ar rc $(NAME) $(SOURCES)
	ranlib $(NAME)
	rm -f $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
