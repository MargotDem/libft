#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	int	int1 = 567;
	int	int2 = 0;
	int	int3 = -258;
	int	int4 = 2147483647;
	int	int5 = -2147483648;

	printf(" putnbr of %i", int1);
	ft_putnbr(int1);
	printf("\n");

	printf(" putnbr of %i", int2);
	ft_putnbr(int2);
	printf("\n");

	printf(" putnbr of %i", int3);
	ft_putnbr(int3);
	printf("\n");

	printf(" putnbr of %i", int4);
	ft_putnbr(int4);
	printf("\n");

	printf(" putnbr of %i", int5);
	ft_putnbr(int5);
	printf("\n");
}
/*

positive int
0
negative int
min int
max int


*/