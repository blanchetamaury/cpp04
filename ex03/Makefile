CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98

SRC = main.cpp AMateria.cpp Character.cpp MateriaSource.cpp Cure.cpp Ice.cpp

OBJ = $(SRC:%.cpp=%.o)

NAME = ex03

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) -o $(NAME) $^ $(CXXFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re