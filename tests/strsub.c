#include <stdio.h>
#include "../libft.h"
//#include <string.h>

int	main(void)
{
	char	string[20] = "abc";
	unsigned int	start = 1;
	size_t		len = 2;

	printf("result of ft_strequ: %s\n", ft_strsub(string, start, len));
}
