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

# executable.
NAME = push_swap

# directories.
SRC_DIR =	./srcs/
OBJS_DIR = ./objs/

DPS = push_swap.h

# alias.
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

#sources and objects.
OBJS = $(SRC_DIR.c=.o)

# commands.
all: objs $(NAME)

objs:
	@mkdir -p $(OBJ_DIR)

# compilation.
$(NAME) : $(OBJS)
		$(CC) $(NAME) $(OBJS)
		@echo "compilation complete :D"

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

# remove all objects files.
clean:
	@$(RM) $(OBJS_DIR)
	@echo "objects removed :D"

# remove objects files, executable and directories.
fclean:
	@$(RM) $(NAME)
	@echo "push swap removed D:"

# not files.
.PHONY: all clean fclean re