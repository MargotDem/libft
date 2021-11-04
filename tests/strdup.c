#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char	string[20] = "test string1";

	printf("result of strdup: %s\n", ft_strdup(string));
}
