
SRCS = AMateria.cpp \
	Character.cpp \
	Cure.cpp \
	Ice.cpp \
	MateriaSource.cpp \
	main.cpp

HEADERS = AMateria.hpp \
	Character.hpp \
	Cure.hpp \
	Ice.hpp \
	ICharacter.hpp \
	IMateriaSource.hpp \
	MateriaSource.hpp \

NAME = materia

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