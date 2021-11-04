//#include <ctype.h>
#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char	c1 = 'h';
	char	c2 = '*';

	printf("is '%c'alpha: %i\n", c1, ft_isalnum(c1));
	printf("is '%c'alpha: %i\n", c2, ft_isalnum(c2));
}
