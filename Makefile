#	Makefile for libft program. 

#
#	Variables
#

#	File name
NAME=libft.a

# Source files 
SRC=./source/ft_atoi.c \
		 ./source/ft_bzero.c \
		 ./source/ft_memset.c \
		 ./source/ft_memcpy.c \
		 ./source/ft_memccpy.c \
		 ./source/ft_memmove.c \
		 ./source/ft_memchr.c \
		 ./source/ft_memcmp.c \
		 ./source/ft_memjoin.c \
		 ./source/ft_strlen.c \
		 ./source/ft_strlcpy.c \
		 ./source/ft_strlcat.c \
		 ./source/ft_strchr.c \
		 ./source/ft_strrchr.c \
		 ./source/ft_strnstr.c \
		 ./source/ft_strncmp.c \
		 ./source/ft_toupper.c \
		 ./source/ft_tolower.c \
		 ./source/ft_strjoin.c \
		 ./source/ft_substr.c \
		 ./source/ft_strdup.c  \
		 ./source/ft_isascii.c \
		 ./source/ft_isdigit.c \
		 ./source/ft_isalpha.c \
		 ./source/ft_isprint.c \
		 ./source/ft_isalnum.c \
		 ./source/ft_split.c \
		 ./source/ft_itoa.c \
		 ./source/ft_putchar_fd.c \
		 ./source/ft_putstr_fd.c \
		 ./source/ft_putnbr_fd.c \
		 ./source/ft_strmapi.c \
		 ./source/ft_calloc.c \
		 ./source/ft_putendl_fd.c \
		 ./source/ft_strtrim.c \
		 ./source/ft_lstnew.c \
	 	 ./source/ft_lstadd_front.c \
	 	 ./source/ft_lstsize.c \
	 	 ./source/ft_lstlast.c \
	 	 ./source/ft_lstadd_back.c \
	 	 ./source/ft_lstdelone.c \
	 	 ./source/ft_lstclear.c \
	  	 ./source/ft_lstiter.c \
	  	 ./source/ft_lstmap.c \
	  	 ./source/get_next_line.c

# Objects
OBJECTS=$(SRC:.c=.o)
BONOBJECTS=$(BON:.c=.o)
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
	@ar rcs $(NAME) $(OBJECTS)
	@echo "$(NAME) created"

%.o: ./source/%.c ./source/%.h
	@$(CC) $(FLAGS) $< -c -o $@

bonus:	$(BONOBJECTS)
	@ar rcs $(NAME) $(BONOBJECTS)	

clean:
	@rm -f $(OBJECTS) $(BONOBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

so: $(OBJECTS) $(BONOBJECTS)
	@$(CC) $(FLAGS) -shared -fpic $(OBJECTS) $(BONOBJECTS) -o $(NAME:.a=.so)
