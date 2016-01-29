NAME = libft.a

SRCS = *.c

FLAGS = -Wall -Wextra -Werror

OBJ = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRCS); ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
