#include <stdio.h>
#include "../libft.h"
//#include <string.h>

int	main(void)
{
	char	string[20] = "abc";
	char	string2[20] = "abc2";
	int		n = 3;

	printf("result of ft_strequ: %i\n", ft_strnequ(string, string2, n));
}
