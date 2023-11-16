SRC		=	./src/main.cpp					\
			./src/BiggestSquare.cpp			\
			./src/MapParser.cpp				\

OBJ		=	${SRC:.cpp=.o} 

BINARY	=	bsq

INCLUDE	=	-Iinclude

CPPFLAGS	= -g -Wall -Werror $(INCLUDE)

CC		= g++

all:	${OBJ}
	${CC} -o ${BINARY} ${OBJ} ${CPPFLAGS}

clean:
	rm -f ${OBJ}

fclean:	clean
	rm -f ${BINARY}

re:	fclean all

.PHONY: all clean fclean re