# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpflegha <jpflegha@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/11 16:18:38 by jpflegha          #+#    #+#              #
#    Updated: 2026/01/14 16:14:28 by jpflegha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
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
	@printf "$(BLUE) :::  ::: ::: ::::::: $(RED) ===      ======== ===  ===  ======= ========\n"
	@printf "$(BLUE) :::  ::: ::: :::  :::$(WHITE) ===      ===      ==== === ===      ===     \n"
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


