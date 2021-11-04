#include "../libft.h"
#include <stdio.h>

char	funktion(char c)
{
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

	//char	*ft_strmap(char const *s, char (*f)(char));
	printf("this is the string: %s\n", str);
	returned_str = ft_strmap(str, &funktion);
	printf("this is the returned string after the string was passed through the funktion by strmap: %s\n", returned_str);
}
