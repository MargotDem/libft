#include <stdio.h>
#include "../libft.h"
//#include <string.h>

int	main(void)
{
	char	string[20] = "abc";
	char	string2[20] = "abc";

	printf("result of ft_strequ: %i\n", ft_strequ(string, string2));
}
