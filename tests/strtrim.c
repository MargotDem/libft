#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char	s1[40] = "  \t  this is the string to trim\n   \n";

	printf("this is the string with whitespaces: '%s'\n", s1);
	printf("result of ft_strtrim: '%s'\n", ft_strtrim(s1));

printf("\n\n");
	char	s2[4] = "   ";
	printf("this is the string with whitespaces: '%s'\n", s2);
	printf("result of ft_strtrim: '%s'\n", ft_strtrim(s2));
}
