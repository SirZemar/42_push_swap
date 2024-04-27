NAME = push_swap.a
LIB = ./libft/libft.a
SRC = $(shell find ./src -name '*.c')
OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wextra -Werror -Wall
AR = ar rcs
RM = rm -f
EXEC = push_swap

all: $(LIB) $(NAME)
	$(CC) $(CFLAGS) $(NAME) $(LIB) -o $(EXEC)

$(LIB): 
	make -C ./libft

$(NAME): $(OBJ)
	$(AR) $(NAME) $(LIB) $(OBJ)

clean:
	make clean -C ./libft
	$(RM) $(OBJ)

fclean: clean
	make fclean -C ./libft
	$(RM) $(NAME) $(EXEC)

re: fclean all