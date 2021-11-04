#include <stdio.h>
#include "../libft.h"
//#include <string.h>

int	main(void)
{
	char	string[20] = "test string1";
	char	string2[20] = "test str0ng";
	int		n = 5;

	printf("result of strncmp: %i\n", ft_strncmp(string, string2, n));
}
