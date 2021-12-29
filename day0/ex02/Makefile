NAME = le_reve

SRC = Account.hpp Account.cpp tests.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Werror -Wextra
# 
CC = g++

all: $(NAME)

$(NAME):$(OBJ)
		$(CC) $(FLAGS) -o $(NAME) $(OBJ)
			
clean:
	rm $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all
