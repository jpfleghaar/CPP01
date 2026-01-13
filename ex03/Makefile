# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpflegha <jpflegha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/11 16:18:38 by jpflegha          #+#    #+#              #
#    Updated: 2026/01/13 15:53:08 by jpflegha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = flag
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++17
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

# ANSI colors
RED = \033[31m
WHITE = \033[37m
BLUE = \033[34m
RESET = \033[0m

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@printf "$(BLUE) :::  ::: ::: ::::::: $(RED) ===      ======== ==== ===  ======= ========\n"
	@printf "$(BLUE) :::  ::: ::: :::  :::$(WHITE) ===      ===      ======== ===      ===     \n"
	@printf "$(RED) ===  === === ===  === ===      ======   ======== ===      ======  \n"
	@printf "$(WHITE)  ======  === ===  === ===      ===      === ==== ===      ===     \n"
	@printf "$(RED)    ==    ===  ======  ======== ======== ===  ===  ======= ======== \n"
	@printf "$(RESET)                                                                    \n"

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all


