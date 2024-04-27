NAME = libft.a
SRCS = $(shell find . -name '*.c')
CFLAGS = -Wextra -Werror -Wall
OBJ = $(SRCS:.c=.o)
AR = ar rcs 
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean 
	$(RM) $(NAME)

re: fclean all