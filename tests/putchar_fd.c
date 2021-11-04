#include "../libft.h"
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	c;
	(void)argc;

	fd = open(argv[1], O_WRONLY | O_APPEND);
	c = '*';

	if (fd > 0)
		ft_putchar_fd(c, fd);
}
