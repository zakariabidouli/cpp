# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zbidouli <zbidouli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/26 00:27:03 by zbidouli          #+#    #+#              #
#    Updated: 2023/04/26 00:27:05 by zbidouli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the program.
NAME     := phonebook

# Sources and objects.
SRCS     := main.cpp Contact.class.cpp utils.cpp PhoneBook.cpp
HDRS     := Contact.class.hpp PhoneBook.hpp
OBJS     := $(SRCS:.cpp=.o)

# Define all the compiling flags.
CXX      := c++
CXXFLAGS := -std=c++98 -Wall -Werror -Wextra

# Compile and create everything.
all: $(NAME)

# Compile the program with the objects.
$(NAME): $(OBJS) $(HDRS)
	@$(CXX) $(OBJS) -o $@

# This won't run if the source files don't exist or are not modified.
%.o: %.cpp %.hpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

# Rule to remove all the object files.
clean:
	@rm -f $(OBJS)
	@echo "[INFO] Objects removed!"

# Rule to remove everything that has been created by the makefile.
fclean: clean
	@rm -f $(NAME)
	@echo "[INFO] $(NAME) removed!"

# Rule to re-make everything.
re:     fclean all

# Makes sure that gnu make will still run even if files called
# clean / fclean / all and re already exist in the directory
.PHONY: all clean fclean format re