SRC =	main.c \



OBJS = $(SRC.c=.o)
NAME = push_swap.out
DPS = push_swap.h

CC = gcc
AR = ar -rcs
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)