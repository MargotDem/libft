#include "../libft.h"
#include <stdio.h>

void	funktion(unsigned int i, char *c)
{
	(void)i;
	*c = '!';
}

int	main(void)
{
	//void	ft_striteri(char *s, void (*f)(unsigned int, char *));
	char	str[4];

	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0';

	printf("this is the string: %s\n", str);
	ft_striteri(str, &funktion);
	printf("this is the string after being passed through the funktion by striteri: %s\n", str);
}
  