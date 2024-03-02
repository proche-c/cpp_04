
SRCS = AAnimal.cpp \
	WrongAnimal.cpp \
	Dog.cpp \
	Cat.cpp \
	WrongCat.cpp \
	Brain.cpp \
	main.cpp

HEADERS = AAnimal.hpp \
	WrongAnimal.hpp \
	Dog.hpp \
	Cat.hpp \
	WrongCat.hpp \
	Brain.hpp \

NAME = abstracts

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