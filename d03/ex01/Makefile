NAME     := ScavTrap

SRCS     := src/ClapTrap.cpp \
			src/main.cpp \
			src/ScavTrap.cpp

HDRS     := include/ClapTrap.hpp \
			include/ScavTrap.hpp

OBJS     := $(SRCS:.cpp=.o)

CXX      := gcc
CXXFLAGS := -std=c++98 -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS) $(HDRS)
	@$(CXX) $(OBJS) -o $@

%.o: %.cpp %.hpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re:     fclean all

.PHONY: all clean fclean format re