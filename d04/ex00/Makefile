NAME     := DiamondTrap

SRCS     := src/main.cpp \
			src/animal.cpp \
			src/cat.cpp \
			src/dog.cpp

HDRS     := include/animal.hpp \
			include/dog.hpp \
			include/cat.hpp

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