# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/06 11:14:10 by ochichep          #+#    #+#              #
#    Updated: 2022/02/06 11:14:11 by ochichep         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = identity

SRC =  main.cpp Base.cpp

%.o: %.cpp
		@$(CC) -c $(FLAGS) -o $@ $<

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -std=c++98
# 
CC = g++

all: $(NAME)

$(NAME):$(OBJ)
		$(CC) $(FLAGS) -o $(NAME) $(OBJ)
			
clean:
	rm $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
