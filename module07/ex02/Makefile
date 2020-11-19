NAME = main
INCLUDES = ./
FLAGS = -Wall -Wextra -Werror
SRC =	main.cpp \
		Array.cpp


OBJ = $(SRC:.cpp=.o)
$(NAME): $(OBJ)
	clang++ -g -I $(INCLUDES) $^ -o $(NAME)

%.o : %.cpp
	clang++ -g -I $(INCLUDES) -o $@ -c $<
all: $(NAME)

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
