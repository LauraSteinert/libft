#	Makefile for libft program. 

#
#	Variables
#

#	File name
NAME=libft.a

# Source files 
SRC=ft_atoi.c \
		 ft_bzero.c \
		 ft_memset.c \
		 ft_memcpy.c \
		 ft_memccpy.c \
		 ft_memmove.c \
		 ft_memchr.c \
		 ft_memcmp.c \
		 ft_strlen.c \
		 ft_strlcpy.c \
		 ft_strlcat.c \
		 ft_strchr.c \
		 ft_strrchr.c \
		 ft_strnstr.c \
		 ft_strncmp.c \
		 ft_toupper.c \
		 ft_tolower.c \
		 ft_strjoin.c \
		 ft_substr.c \
		 ft_strdup.c  \
		 ft_isascii.c \
		 ft_isdigit.c \
		 ft_isalpha.c \
		 ft_isprint.c \
		 ft_isalnum.c \
		 ft_split.c \
		 ft_itoa.c \
		 ft_putchar_fd.c \
		 ft_putstr_fd.c \
		 ft_putnbr_fd.c \
		 ft_strmapi.c

BON= ft_lstnew.c \
	 ft_lastadd_front.c \
	 ft_lstsize.c \
	 ft_lstlast.c \
	 ft_lstadd_back.c \
	 ft_lstdelone.c \
	 ft_lstclear.c \
	 ft_lstiter.c \
	 ft_lstmap.c

# Objects
OBJECTS=$(SRC:.c=.o)

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
	ar rcs $(NAME) $(OBJECTS)
	@echo "$(NAME) created"

%.o: %.c 
	$(CC) $(FLAGS) $< -c -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
