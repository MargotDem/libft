//#include <ctype.h>
#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char	c1 = 'h';
	char	c2 = '*';
	char	c3 = '\n';

	printf("is '%c'alpha: %i\n", c1, ft_isprint(c1));
	printf("is '%c'alpha: %i\n", c2, ft_isprint(c2));
	printf("is '%c'alpha: %i\n", c3, ft_isprint(c3));
}
