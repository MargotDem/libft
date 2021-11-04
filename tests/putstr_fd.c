#include "../libft.h"
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	*s = "hello there this is the string to write to the file";
	(void)argc;

	fd = open(argv[1], O_WRONLY | O_APPEND);

	if (fd > 0)
		ft_putstr_fd(s, fd);
}
