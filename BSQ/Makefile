NAME = bsq

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = file_utils.c save_arr_in_matrix.c structures.h bsq.c read_to_array.c stdin_func.c ft_atoi.c main.c to_resolve_map.c
OBJS = $(SRCS:.c=.o)
HEADERS := structures.h

.DEFAULT_GOAL := all

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) 

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
