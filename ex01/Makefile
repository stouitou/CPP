NAME = phonebook

SRC = main.cpp \
	PhoneBook.cpp

OBJ = ${SRC:.cpp=.o}

HDR = PhoneBook.hpp

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98


all: ${NAME}

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJ} ${HDR}
	${CC} ${CFLAGS} ${OBJ} -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
