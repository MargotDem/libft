//#include <ctype.h>
#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	int	int1 = 125;
	int	int2 = 9;

	printf("is '%i' digit: %i\n", int1, ft_isdigit(int1));
	printf("is '%i'digit: %i\n", int2, ft_isdigit(int2));
}
