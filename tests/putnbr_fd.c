#include <stdio.h>
#include "../libft.h"
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd;
	(void)argc;
	int	int1 = 567;
	int	int2 = 0;
	int	int3 = -258;
	int	int4 = 2147483647;
	int	int5 = -2147483648;

	fd = open(argv[1], O_WRONLY | O_APPEND);
	if (fd > 0)
	{
		printf(" putnbr of %i", int1);
		ft_putnbr_fd(int1, fd);
		ft_putchar_fd('\n', fd);

	printf(" putnbr of %i", int2);
	ft_putnbr_fd(int2, fd);
	ft_putchar_fd('\n', fd);

	printf(" putnbr of %i", int3);
	ft_putnbr_fd(int3, fd);
	ft_putchar_fd('\n', fd);

	printf(" putnbr of %i", int4);
	ft_putnbr_fd(int4, fd);
	ft_putchar_fd('\n', fd);

	printf(" putnbr of %i", int5);
	ft_putnbr_fd(int5, fd);
	ft_putchar_fd('\n', fd);
	}
}