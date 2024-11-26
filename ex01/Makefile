# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/20 16:37:10 by tafocked          #+#    #+#              #
#    Updated: 2024/11/26 18:04:44 by tafocked         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ScavTrap

FILES	= main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp \

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic -g3
LDLIBS	=

FILES_DIR = ./
OBJ_DIR	= .obj
OBJ		= $(addprefix $(OBJ_DIR)/, $(FILES:%.cpp=%.o))

all: $(NAME)

re: fclean all

$(OBJ_DIR)/%.o: $(FILES_DIR)/%.cpp
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(LDLIBS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

.PHONY: all re clean fclean