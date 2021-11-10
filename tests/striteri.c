#include "../libft.h"
#include <stdio.h>

void	funktion(unsigned int i, char *c)
{
	(void)i;
	*c = '!';
}

int	main(void)
{
	char	str[4] = "abc";

	printf("this is the string: %s\n", str);
	ft_striteri(str, &funktion);
	printf("this is the string after being passed through the funktion by striteri: %s\n", str);
}
  