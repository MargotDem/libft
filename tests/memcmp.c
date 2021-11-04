//#include <string.h>
#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char	string[20] = "test ttring1";
	char	string2[20] = "test string1";
	int		n = 6;

	printf("result of ft_memcmp: %i\n", ft_memcmp(string, string2, n));
}
