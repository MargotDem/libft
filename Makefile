NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

FILES = ft_strlen.c ft_putchar.c ft_putstr.c ft_strcmp.c \
	ft_strdup.c ft_putnbr.c ft_atoi.c ft_strcat.c ft_strncat.c \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c \
	ft_toupper.c ft_tolower.c ft_strncmp.c ft_strcpy.c \
	ft_strncpy.c ft_strlcat.c ft_strchr.c ft_isascii.c \
	ft_strrchr.c ft_strstr.c ft_ismatch.c ft_strnstr.c \
	ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_putendl.c ft_putnbr_main.c ft_putnbr_fd.c ft_memalloc.c \
	ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c \
	ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c \
	ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c \
	ft_strtrim.c
OBJECTFILES = ft_strlen.o ft_putchar.o ft_putstr.o ft_strcmp.o \
	ft_strdup.o ft_putnbr.o ft_atoi.o ft_strcat.o ft_strncat.o \
	ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isprint.o \
	ft_toupper.o ft_tolower.o ft_strncmp.o ft_strcpy.o \
	ft_strncpy.o ft_strlcat.o ft_strchr.o ft_isascii.o \
	ft_strrchr.o ft_strstr.o ft_ismatch.o ft_strnstr.o \
	ft_itoa.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o \
	ft_putendl.o ft_putnbr_main.o ft_putnbr_fd.o ft_memalloc.o \
	ft_memdel.o ft_strnew.o ft_strdel.o ft_strclr.o \
	ft_striter.o ft_striteri.o ft_strmap.o ft_strmapi.o \
	ft_strequ.o ft_strnequ.o ft_strsub.o ft_strjoin.o \
	ft_strtrim.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c -I ./ $(FILES)
	ar rc $(NAME) $(OBJECTFILES)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all clean
