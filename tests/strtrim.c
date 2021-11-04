#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char	string[40] = "  \t  this is the string to trim\n   \n";

	printf("this is the string with whitespaces: '%s'\n", string);
	printf("result of ft_strtrim: '%s'\n", ft_strtrim(string));
}
