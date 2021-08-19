.DEFAULT_GOAL := all

NAME = megaphone

FILE_SRC = megaphone.cpp
FILE_OBJ = $(FILE_SRC:.cpp=.o)
CC = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(FILE_SRC)
	clang++ $(CC) megaphone.cpp -o megaphone

clean:
	@rm -rf $(FILE_OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean