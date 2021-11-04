#include <stdio.h>
#include "../libft.h"
//#include <string.h>

int	main(void)
{
	char	string[20] = "test string1";
	char	string2[20] = "test string";

	printf("result of strcmp: %i\n", ft_strcmp(string, string2));
}
