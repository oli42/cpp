NAME = phonebook

SRC = Phonebook.class.cpp Contact.class.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -std=c++98

CC = g++

all: $(NAME)

$(NAME):	$(OBJ)
			$(CC) $(FLAGS) $(OBJ) -o $@
			
clean:
	rm $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all
