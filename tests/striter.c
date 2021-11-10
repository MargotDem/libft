#include "../libft.h"
#include <stdio.h>

void	funktion(char *c)
{
	*c = '!';
}

int	main(void)
{
	char	str[4] = "abc";
	printf("this is the string: %s\n", str);
	ft_striter(str, &funktion);
	printf("this is the string after being passed through the funktion by striter: %s\n", str);
}
