# Makefile
SRCS = $(wildcard *.c) 

NAME = libft.a
LIBC = ar -rcs
OBJS = $(SRCS:.c=.o)
CC = cc
FLAGS = -Wall -Werror -Wextra
RM = rm -f
INCS = .

.c.o:
    ${CC} ${FLAGS} -c $< -o ${<:.c=.o} 

$(NAME): ${OBJS}
    ${LIBC} ${NAME} ${OBJS}

# so:
#     ${CC} -nostartfiles -fPIC ${FLAGS} ${SRCS}
#     gcc -nostartfiles -shared -o libft.so ${OBJS}

all: ${NAME}

.o : header
    jbjbnjl
clean:
    ${RM} ${OBJS}

fclean: clean
    ${RM} ${NAME} ${so}

re: fclean all

.PHONY: all clean fclean re