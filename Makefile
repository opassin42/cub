# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: opassin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/19 14:24:56 by opassin           #+#    #+#              #
#    Updated: 2021/12/08 17:46:58 by opassin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cub3d

CC = clang

CFLAGS = -Wall -Wextra -Werror

SRCS = utils.c init.c map_parsing.c error.c gnl.c gnl_utils.c main.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	re clean fclean all
