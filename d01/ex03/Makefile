NAME     := Human

SRCS     := src/main.cpp \
			src/HumanA.cpp \
			src/HumanB.cpp \
			src/Weapon.cpp

HDRS     := include/HumanA.hpp \
			include/HumanB.hpp \
			include/Weapon.hpp

OBJS     := $(SRCS:.cpp=.o)

CXX      := clang++
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