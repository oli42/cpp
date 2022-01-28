NAME = interface

SRC = AMateria.cpp Ice.cpp Cure.cpp  Character.cpp MateriaSource.cpp main.cpp

%.o: %.cpp
		@$(CC) -c $(FLAGS) -o $@ $<

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Werror -Wextra
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
