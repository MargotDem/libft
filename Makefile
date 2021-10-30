NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

FILES = ft_strlen.c ft_putchar.c ft_putstr.c ft_strcmp.c \
	ft_strdup.c ft_putnbr.c ft_atoi.c ft_strcat.c ft_strncat.c \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c \
	ft_toupper.c ft_tolower.c ft_strncmp.c ft_strcpy.c \
	ft_strncpy.c ft_strlcat.c ft_strchr.c
OBJECTFILES = ft_strlen.o ft_putchar.o ft_putstr.o ft_strcmp.o \
	ft_strdup.o ft_putnbr.o ft_atoi.o ft_strcat.o ft_strncat.o \
	ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isprint.o \
	ft_toupper.o ft_tolower.o ft_strncmp.o ft_strcpy.o \
	ft_strncpy.o ft_strlcat.o ft_strchr.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c -I ./ $(FILES)
	ar rc $(NAME) $(OBJECTFILES)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
