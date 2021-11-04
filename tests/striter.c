#include "../libft.h"
#include <stdio.h>

void	funktion(char *c)
{
	*c = '!';
}

int	main(void)
{
	char	str[4];

	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0';

	//void	ft_striter(char *s, void (*f)(char *));
	printf("this is the string: %s\n", str);
	ft_striter(str, &funktion);
	printf("this is the string after being passed through the funktion by striter: %s\n", str);
}
