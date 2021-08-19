.DEFAULT_GOAL := all

NAME = PhoneBook

HEADER		=	contact.hpp \
				phonebook.hpp

FILE_SRC = contact.cpp main.cpp phonebook.cpp

FILE_OBJ = $(FILE_SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(FILE_SRC) $(HEADER)
	clang++ -Wall -Wextra -Werror $(HEADER) $(FILE_SRC) -o $(NAME)

clean:
	@rm -rf $(FILE_OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean