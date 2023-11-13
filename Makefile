# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 12:15:39 by oumimoun          #+#    #+#              #
#    Updated: 2023/11/13 12:15:44 by oumimoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR = .

SRCS = $(wildcard $(SRC_DIR)/*.c) 


NAME = libft.a
LIBC = ar -rcs
OBJS = $(SRCS:.c=.o)
CC = cc
FLAGS = -Wall -Werror -Wextra
RM = rm -f
INCS = libft.h
so = libft.so

%.o : %.c $(INCS)
	$(CC) $(FLAGS) -c $<

$(NAME): ${OBJS}
	${LIBC} ${NAME} ${OBJS}

so:
	${CC} -nostartfiles -fPIC ${FLAGS} ${SRCS}
	gcc -nostartfiles -shared -o libft.so ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME} ${so}

re: fclean all