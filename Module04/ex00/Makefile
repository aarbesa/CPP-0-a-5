### COMPILATION ###

CC      = c++
FLAGS   = -Wall -Wextra -Werror -std=c++98

### EXECUTABLE ###

NAME    = ex00

### SOURCE FILES ###

SOURCES =	main.cpp \
			WrongCat.cpp \
			WrongAnimal.cpp \
			Cat.cpp \
			Dog.cpp \
			Animal.cpp \
			
OBJS    = $(SOURCES:.cpp=.o)

### RULES ###

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $@ $^

%.o: %.cpp *.hpp
	$(CC) $(FLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
