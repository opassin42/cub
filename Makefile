# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: opassin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/19 14:24:56 by opassin           #+#    #+#              #
#    Updated: 2021/12/09 14:36:59 by opassin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cub3d

CC = clang

CFLAGS = -Wall -Wextra -Werror

DEBUGS = -g3 -fsanitize=address

SRCS = utils.c init.c map_parsing.c error.c get_next_line.c \
	   get_next_line_utils.c main.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(DEBUGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	re clean fclean all
