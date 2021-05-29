#	Makefile for libft program. 

#
#	Variables
#

#	File name
NAME=libft.a

# include path
INCLUDES=./

# Objects
OBJECTS= ft_atoi.o \
		 ft_bzero.o \
		 ft_memset.o \
		 ft_memcpy.o \
		 ft_memccpy.o \
		 ft_memmove.o \
		 ft_memchr.o \
		 ft_memcmp.o \
		 ft_strlen.o \
		 isfamily.o \
		 ft_strlcpy.o \
		 ft_strlcat.o \
		 ft_strchr.o \
		 ft_strrchr.o \
		 ft_strnstr.o \
		 ft_strncmp.o \
		 ft_toupper.o \
		 ft_tolower.o

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
