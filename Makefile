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

# alias.
LIB =   ar rcs
RM  =   rm -f
CC  =   gcc
CFLAGS  =   -Wall -Wextra -Werror -I ./include -I ./libft/
DEBUG   =   -g3 -fsanitize=address
NAME    =   push_swap

# sources and objects.
RR  =   push_swap.c ft_checks.c ft_list.c ft_list2.c ft_werrors.c ft_xlen.c \
            ft_actions.c ft_mov_sp.c ft_mov_rot.c ft_mov_rr.c algorithm3.c \
            algorithm5.c algorithm100.c algorithm500.c str_mod.c
SRCR_DIR    =   ./srcs/
SRCR    =   $(addprefix $(SRCR_DIR), $(RR))
OBJ_DIR =   ./obj/
OBJ_FILES   =   $(RR:.c=.o)
OBJ =   $(addprefix $(OBJ_DIR), $(OBJ_FILES))
LIBFT_PATH = libft/
LIBFT = $(LIBFT_PATH)libft.a

# compilation.
all: $(OBJ_DIR) $(NAME)

$(LIBFT):$(LIBFT_PATH)
	@make -sC $(LIBFT_PATH)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o:$(SRCR_DIR)%.c
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJ) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)
	@echo "Push_swap compiled! :D\n"

clean:
	@$(RM) $(OBJ)
	@make clean -sC libft
	@rm -rf $(OBJ_DIR)
	@echo "All .o files removed :D\n"

fclean: clean
	@$(RM) $(NAME)
	@make fclean -sC libft
	@rm -f $(OBJ_DIR)
	@echo "All removed D:\n"

re: fclean all

.PHONY: all clean fclean re