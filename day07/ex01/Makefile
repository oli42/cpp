# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ochichep <ochichep@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/12 09:03:22 by ochichep          #+#    #+#              #
#    Updated: 2022/02/12 09:03:24 by ochichep         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = temp

SRC =  main.cpp

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
