NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

FILES = ft_strlen.c ft_putchar.c ft_putstr.c ft_strcmp.c ft_strdup.c ft_putnbr.c
OBJECTFILES = ft_strlen.o ft_putchar.o ft_putstr.o ft_strcmp.o ft_strdup.o ft_putnbr.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c -I ./ $(FILES)
	ar rc $(NAME) $(OBJECTFILES)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
