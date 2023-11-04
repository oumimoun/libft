# CC = gcc
# CFLAGS = -Wall

# myprogram: main.c utils.c
# 	$(CC) $(CFLAGS) -o myprogram main.c utils.c

# clean:
# 	rm -f myprogram
# file = ft_isalpha.c
# flag =  -Wall, -Wextra -Werror,
# hello:
# 	echo "Hello, World"
# 	@echo $(PATH)
# 	@echo $(file)
# display:
# 	@echo "hello me"
# # all:
# # 	gcc $(file) -o cprogram
# build:
# 	gcc $(file) $(flag)
# clean:
# 	@rm *.o
# 	@echo "`date` done" > log.txt
# define affichage
# 	@echo " entering function "
# 	@echo " 0 is $0"
# 	@echo " 1 is $1"
# 	@echo " 2 is $2"
# 	@echo " @ is $@"
# 	@echo " sf salaw"
# endef

# x:= hi pp
# target:
# 	$(call affichage , oussama , $(x))
# 	@echo "target is $@"


# CC = gcc
# CFLAGS = -Wall -Werror -Wextra

# SRCS = $(wildcard *.c)
# OBJS = $(SRCS:.c=.o)

# TARGET = my_program

# all: $(TARGET)

# $(TARGET): $(OBJS)
# 	$(CC) $(CFLAGS) -o $@ $^

# %.o: %.c
# 	$(CC) $(CFLAGS) -c $<

# clean:
# 	rm -f $(OBJS) $(TARGET)

# .PHONY: all clean

# hey: one two
# 	# Outputs "hey", since this is the target name
# 	echo $@

# 	# Outputs all prerequisites newer than the target
# 	echo $?

# 	# Outputs all prerequisites
# 	echo $^

# 	touch hey

# one:
# 	touch one

# two:
# 	touch two

# clean:
# 	rm -f hey one two
# %.c:
# 	touch $@



SRCS = $(wildcard *.c) 


NAME = libft.a
LIBC = ar -rcs
OBJS = $(SRCS:.c=.o)
CC = cc
FLAGS = -Wall -Werror -Wextra
RM = rm -f
INCS = .
# so = libft.so
# -I ${INCS}
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

.PHONY