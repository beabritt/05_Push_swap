# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: becamino <becamino@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/03 15:53:10 by becamino          #+#    #+#              #
#    Updated: 2023/08/03 15:53:13 by becamino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC =	main.c \

LIBFT_PATH = ./libft/libft.a
OBJS = $(SRC.c=.o)
DPS = push_swap.h

CC = gcc
AR = ar -rcs
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

all: make_libft $(NAME)

make_libft: @make -sC ./libft

$(NAME) : $(OBJS)
		$(CC) $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean:
	@$(RM) $(NAME)

.PHONY: all clean fclean re