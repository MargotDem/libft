//#include <ctype.h>
#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char	c1 = 'F';
	char	c2 = '9';

	printf("is '%c'alpha: %i\n", c1, ft_isalpha(c1));
	printf("is '%c'alpha: %i\n", c2, ft_isalpha(c2));
}
