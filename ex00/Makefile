
SRCS = Animal.cpp \
	WrongAnimal.cpp \
	Dog.cpp \
	Cat.cpp \
	WrongCat.cpp \
	main.cpp

HEADERS = Animal.hpp \
	WrongAnimal.hpp \
	Dog.hpp \
	Cat.hpp \
	WrongCat.hpp \

NAME = animals

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

RM = rm -f

%.o: %.cpp Makefile ${HEADERS}
		${CC} ${CFLAGS} -c $< -o $@

OBJS =	${SRCS:.cpp=.o}
DEPS =	${SRCS:.cpp=.d}

all:	$(NAME)

-include $(DEPS)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

.PHONY: clean fclean re

clean:
	$(RM) $(OBJS) $(DEPS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all