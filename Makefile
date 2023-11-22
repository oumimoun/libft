# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 12:15:39 by oumimoun          #+#    #+#              #
#    Updated: 2023/11/22 19:47:17 by oumimoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
	ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c \
	ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
	ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c \
	ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\

BSRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
	ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c\

NAME = libft.a
LIBC = ar -rcs
OBJS = $(SRCS:.c=.o)
BOBJS = $(BSRC:.c=.o)
OBJS_ALL = $(OBJS) $(BOBJS)
CC = cc
FLAGS = -Wall -Werror -Wextra
RM = rm -f
INCS = libft.h
so = libft.so

%.o : %.c $(INCS)
	$(CC) $(FLAGS) -c $<

bonus: $(OBJS_ALL)
	ar -rc $(NAME) $(OBJS_ALL)

$(NAME): ${OBJS}
	${LIBC} ${NAME} ${OBJS}

so:
	${CC} -nostartfiles -fPIC ${FLAGS} ${SRCS}
	gcc -nostartfiles -shared -o libft.so ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS} ${BOBJS}

fclean: clean
	${RM} ${bonus} ${NAME} ${so}

re: fclean all
