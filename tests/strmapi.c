#include "../libft.h"
#include <stdio.h>

char	funktion(unsigned int i, char c)
{
	(void)i;
	c = '!';
	return (c);
}

int	main(void)
{
	char	str[4];
	char	*returned_str;

	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0';

	//char	*ft_strmapi(char const *s, char(*f)(unsigned int, char));
	printf("this is the string: %s\n", str);
	returned_str = ft_strmapi(str, &funktion);
	printf("this is the returned string after the string was passed through the funktion by ft_strmapi: %s\n", returned_str);
}