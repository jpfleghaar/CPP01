# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpflegha <jpflegha@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/11 15:33:43 by jpflegha          #+#    #+#              #
#    Updated: 2026/01/11 15:45:38 by jpflegha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++17
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

# ANSI color codes
BLUE = \033[34m
RESET = \033[0m

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@printf "$(BLUE)▀█████████▄     ▄████████    ▄████████  ▄█  ███▄▄▄▄   \n"
	@printf "  ███    ███   ███    ███   ███    ███ ███  ███▀▀▀██▄ \n"
	@printf "  ███    ███   ███    ███   ███    ███ ███▌ ███   ███ \n"
	@printf " ▄███▄▄▄██▀   ▄███▄▄▄▄██▀   ███    ███ ███▌ ███   ███ \n"
	@printf "▀▀███▀▀▀██▄  ▀▀███▀▀▀▀▀   ▀███████████ ███▌ ███   ███ \n"
	@printf "  ███    ██▄ ▀███████████   ███    ███ ███  ███   ███ \n"
	@printf "  ███    ███   ███    ███   ███    ███ ███  ███   ███ \n"
	@printf "▄█████████▀    ███    ███   ███    █▀  █▀    ▀█   █▀ \n"
	@printf "               ███    ███                             \n$(RESET)"

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

