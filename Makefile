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

LIBFT_PATH = libft/
LIBFT = $(LIBFT_PATH)libft.a
INCLUDE = include/

# sources
SRC = push_swap.c ft_checks.c ft_list.c ft_list2.c ft_werrors.c ft_xlen.c \
			ft_actions.c ft_mov_sp.c ft_mov_rot.c ft_mov_rr.c algorithm3.c \
			algorithm5.c algorithm100.c algorithm500.c

SRC_DIR =	./srcs/*/
SRCS = $(addprefix $(SRC_DIR), $(SRC))

# objects.
OBJ_DIR = obj/
OBJ = $(SRC_DIR.c=.o)
OBJS = $(addprefix $(OBJ_DIR), $(OBJ))

# alias.
CC = gcc
CFLAGS = -Wall -Werror -Wextra -I ./include -I ./libft/include
RM = rm -rf
DPS = push_swap.h

# command.
all: $(NAME)

# compilation.
$(LIBFT): $(LIBFT_PATH)
	@make -C $(LIBFT_PATH)


$(NAME) : $(OBJS) $(LIBFT)
		@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)
		@echo "compilation complete :D"


$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(LIBFT)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# remove all objects files.
clean:
	@make -C $(LIBFT_PATH) clean
	@$(RM) $(OBJS_DIR)
	@echo "objects removed :D"

# remove objects files, executable and directories.
fclean: clean
	@make -C $(LIBFT_PATH) clean
	@$(RM) $(NAME)
	@echo "push swap removed D:"

re: fclean all

# not files.
.PHONY: all clean fclean re