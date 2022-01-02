NAME = BraiiiiiiinnnzzzZ

SRC = Zombie.cpp main.cpp randomChump.cpp newZombie.cpp 

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
