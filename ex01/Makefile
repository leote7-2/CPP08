# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joaoleote <joaoleote@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/06 12:41:45 by joaoleote         #+#    #+#              #
#    Updated: 2026/09/29 13:43:42 by joaoleote        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program name
NAME = Span

# Colors for terminal output
RESET = \033[0m
GREEN = \033[32m
YELLOW = \033[33m
RED = \033[31m
CYAN = \033[36m

# Source files (explicitly listed to replace dynamic find)
SRCS = src/main.cpp \
		src/Span.cpp

# Object files
OBJ = $(SRCS:.cpp=.o)

# Compiler and flags
C++ = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

# Default target
all: $(NAME)

# Link executable
$(NAME): $(OBJ)
	@echo "$(YELLOW)[ LINKING ]$(RESET) Linking $(NAME)..."
	@$(C++) $(OBJ) -o $(NAME)
	@echo "$(GREEN)[ OK ]$(RESET) $(NAME) linked."
	@echo "$(GREEN)[ SUCCESS ]$(RESET) $(NAME) built successfully!"

# Compile source files
%.o: %.cpp
	@echo "$(CYAN)[ COMPILING ]$(RESET) $< -> $@"
	@$(C++) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	@echo "$(RED)[ CLEAN ]$(RESET) Removing object files..."
	@rm -rf $(OBJ)
	@echo "$(GREEN)[ OK ]$(RESET) Object files removed."

# Clean everything
fclean: clean
	@echo "$(RED)[ FCLEAN ]$(RESET) Removing $(NAME) ..."
	@rm -f $(NAME)
	@echo "$(GREEN)[ OK ]$(RESET) All generated files removed."

# Rebuild
re: fclean all

# Phony targets
.PHONY: all clean fclean re
