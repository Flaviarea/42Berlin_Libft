NAME = libft.a
CC= gcc
CCFLAGS= -Wall -Wextra -Werror 

SRCS = ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c 
	
OBJECTS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	
%.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@ // # $(CC): Compiler command (e.g., gcc).
	# $(CFLAGS): Compiler flags (e.g., -Wall, -Wextra, -Werror).
	# $<: The first prerequisite (the source file being compiled, e.g., ft_strlen.c).
	# -c: Tells the compiler to compile the source into an object file (.o) without linking.
	# -o: Specifies the output file (the .o file).
	# $@: The target being built (the object file, e.g., ft_strlen.o).

clean:
	rm -f $(OBJECTS) // # rm -f: Deletes files forcefully and ignores errors if the files do not exist.
	# $(OBJECTS): The list of object files (e.g., ft_strlen.o, ft_atoi.o).
	
fclean: clean 
	rm -f $(NAME) // # It removes not only the object files but also the compiled library (or executable) file.
	# $(NAME): The target name of your compiled library (e.g., libft.a).
	# By first running `clean`, it ensures all object files are removed as well.

	
re: fclean all
	
.PHONY: all clean fclean re
