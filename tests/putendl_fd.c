#include "../libft.h"
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	*s = "a string to write to file followed by a newline";
	(void)argc;

	fd = open(argv[1], O_WRONLY | O_APPEND);

	if (fd > 0)
		ft_putendl_fd(s, fd);
}
