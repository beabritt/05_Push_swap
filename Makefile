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

LIBFT_DIR = libft/
LIBFT = $(LIBFT_DIR)libft.a

# sources
SRC_CFILES = push_swap.c ft_checks.c ft_list.c ft_list2.c ft_werrors.c ft_xlen.c \
			ft_actions.c ft_mov_sp.c ft_mov_rot.c ft_mov_rr.c algorithm3.c \
			algorithm5.c algorithm100.c algorithm500.c str_mod.c

SRC_DIR = ./srcs/
SRC_FILES = $(addprefix $(SRC_DIR), $(SRC_CFILES))


# objects.
OBJ_DIR = ./obj/
OBJ_FILES = $(SRC_CFILES.c=.o)
OBJ = $(addprefix $(OBJ_DIR), $(OBJ_FILES))

# alias.
CC = gcc
CFLAGS = -Wall -Werror -Wextra -I ./include -I ./libft/libft.a 
RM = rm -rf

# command make all.
all: $(OBJ_DIR) $(NAME)

# compilation.
$(LIBFT): $(LIBFT_DIR)
	@make -C $(LIBFT_DIR)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ) $(LIBFT)
		@echo "compilation complete :D"
		@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)
		@echo "compilation complete :D"


# remove all objects files.
clean:
	@make -C $(LIBFT_DIR) clean
	@$(RM) $(OBJ_DIR)
	@echo "objects removed :D"

# remove objects files, executable and directories.
fclean: clean
	@make -C $(LIBFT_DIR) clean
	@$(RM) $(NAME)
	@echo "push swap removed D:"

re: fclean all

# not files.
.PHONY: all clean fclean re