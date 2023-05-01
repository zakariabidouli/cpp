NAME     := Brain

SRCS     := main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
HEADERS  := Animal.hpp Cat.hpp Dog.hpp	WrongAnimal.hpp WrongCat.hpp Brain.hpp
OBJS     := $(SRCS:.cpp=.o)

CXX      := c++
CXXFLAGS := -std=c++98 -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS) $(HEADERS)
	@$(CXX) $(OBJS) -o $@

%.o: %.cpp %.hpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)
	@echo "[INFO] Objects removed!"

fclean: clean
	@rm -f $(NAME)
	@echo "[INFO] $(NAME) removed!"
re:     fclean all
.PHONY: all clean fclean format re