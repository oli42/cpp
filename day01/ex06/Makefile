NAME = karen_filter

SRC = main.cpp Karen.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -std=c++98
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
