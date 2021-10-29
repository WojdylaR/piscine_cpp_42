NAME     := DiamondTrap

SRCS     := src/ClapTrap.cpp \
			src/main.cpp \
			src/ScavTrap.cpp \
			src/FragTrap.cpp \
			src/DiamondTrap.cpp

HDRS     := include/ClapTrap.hpp \
			include/ScavTrap.hpp \
			include/FragTrap.hpp \
			include/DiamondTrap.hpp

OBJS     := $(SRCS:.cpp=.o)

CXX      := g++
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