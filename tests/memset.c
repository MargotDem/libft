//#include <string.h>
#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	str[10];
	printf("the string then: %s\n", str);
	ft_memset((void *)str, 'f', 9);
	str[9] = '\0';
	printf("the string now: %s\n", str);
}
