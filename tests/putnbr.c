#include <stdio.h>
#include "../libft.h"
#include "tests.h"

int	main(void)
{
	int	int1 = 567;
	print_test_descr("number", ft_itoa(int1));
	ft_putnbr(int1);
	printf("\n");
	
	int	int2 = 0;
	print_test_descr("number", ft_itoa(int2));
	ft_putnbr(int2);
	printf("\n");

	int	int3 = -258;
	print_test_descr("number", ft_itoa(int3));
	ft_putnbr(int3);
	printf("\n");

	int	int4 = 2147483647;
	print_test_descr("number", ft_itoa(int4));
	ft_putnbr(int4);
	printf("\n");

	int	int5 = -2147483648;
	print_test_descr("number", ft_itoa(int5));
	ft_putnbr(int5);
	printf("\n");
}
