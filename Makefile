SRC		=	./src/main.c					\
			./src/Game/display.c			\

OBJ		=	${SRC:.c=.o} 

BINARY	=	bsq

INCLUDE	=	-Iinclude

CFLAGS	= -g -Wall -Werror $(INCLUDE)

all:	${OBJ}
	${CC} -o ${BINARY} ${OBJ}

clean:
	rm -f ${OBJ}

fclean:	clean
	rm -f ${BINARY}

re:	fclean all

.PHONY: all clean fclean re