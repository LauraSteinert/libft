#	Makefile for libft program. 

#	Variables

#	File name
NAME=libft.a
# .c files
INCLUDES=./
# .h files

# Objects
OBJECTS= atoiandbzero.o \
		 memset.o \
		 memfamily.o \
		 isfamily.o \
		 strfamily.o \
		 strlfamily.o \
		 tofamily.o \
		 mem.o
# Compiler 
CC=gcc

# Flags
FLAGS=-Wall -Wextra -Werror
# Dependencies 
DEP=libft.h

#
# Compilation itself
#

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $@ $^

%.o: %.c $(DEPS)
	$(CC) $(FLAGS) $< -c -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
