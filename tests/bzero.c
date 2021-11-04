//#include <strings.h>
#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	str[10];
	printf("the string then: %s\n", str);
	ft_bzero((void *)str, 9);
	//ft_memset((void *)str, '6', 9);
	str[9] = '\0';
	printf("the string now: %s\n", str);
}
