#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "../libft.h"

int	main(void)
{
	char	*str;

	str = (char *)malloc(4 * sizeof(char));
	str[0] = 'A';
	str[1] = 'A';
	str[2] = 'A';
	str[3] = '\0';
	printf("this is the malloced string: %s\n", str);
	printf("this is the pointer: %p\n", str);
	ft_memdel((void **)&str);
	printf("this is not the malloced string anymore as hopefull the freeing works: %s\n", str);
	printf("this is the pointer now: %p\n", str);
}
