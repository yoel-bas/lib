CC = gcc
FLAGS = -Werror -Wall -Wextra
NAME = libft.a
SRC = ${wildcard *.c}
OBJ = ${SRC:.c=.o}

all : ${NAME}

${NAME} : ${OBJ}
	@ar rcs ${NAME} ${OBJ}

%.o : %.c
	${CC} ${FLAGS} -c $<

fclean : clean
	@rm ${NAME}

clean :
	@rm ${OBJ}

re : fclean all

.PHONY : all clean fclean re