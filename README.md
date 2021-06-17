# libft

My first C library. Made for 42sp.

## General info
The aim of this project is to code a C library regrouping usual functions thatyou’ll be allowed to use in other projects.

### List of Functions

Functions asked on the project. The "Mandatory" and "Additional" functions are related to actual functions from different C libraries. The "Bonus" ones are related to Linked Lists, and "get_next_line" is a project on its own, where we can read an intire file or from standard input.

| Mandatory        | Mandatory     | Additional   | Bonus           |
| ---------------- |:-------------:| -----------: | ---------------:| 
| ft_memset        | ft_strrchr    | ft_substr    | ft_lstnew       |
| ft_bzero         | ft_strnstr    | ft_strjoin   | ft_lstadd_front |
| ft_memcpy        | ft_strncmp    | ft_strtrim   | ft_lstsize      |
| ft_memcpy        | ft_atoi       | ft_split     | ft_lstlast      |
| ft_memmove       | ft_isalpha    | ft_itoa      | ft_lstadd_back  |
| ft_memchr        | ft_isdigit    | ft_strmapi   | ft_lstdelone    |
| ft_memcmp        | ft_isalnum    | ft_putchar_fd| ft_lstclear     |
| ft_strlen        | ft_isascii    | ft_putstr_fd | ft_lstiter      |
| ft_strlcpy       | ft_isprint    | ft_putendl_fd| ft_lstmap       |
| ft_strlcat       | ft_toupper    | ft_putnbr_fd | get_next_line   |
| ft_strchr        | ft_tolower    |      -       |       -         |
| ft_calloc        | ft_strdup     |      -       |       -         |

### Makefile

List of commands from the Makefile.

| Command       | Meaning                                                    |
| ------------- |:----------------------------------------------------------:| 
| make          | Makes the library with all the functions.                  |
| make clean    | Erases the objects files.                                  |
| make re       | Calls "fclean" rule, followed by "all".                    |
