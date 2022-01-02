NAME = violence

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

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
