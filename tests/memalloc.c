#include "../libft.h"
#include <stdio.h>
#include "tests.h"

int	main(void)
{
	char	*str;
	int		i;
	print_test_descr("test with a string", "");
	printf("\n");
	str = (char *)ft_memalloc(3);
	i = 0;
	while (i < 3)
	{
		printf("str[%i] now: %c\n", i, str[i]);
		str[i] = 'A';
		i++;
	}
	i = 0;
	while (i < 3)
	{
		printf("and now str[%i]: %c\n", i, str[i]);
		i++;
	}

	printf("\n\n");
	int		*nb;
	print_test_descr("test with an int", "");
	nb = (int *)ft_memalloc(4);
	*nb = 56;
	printf("\nthe int: %i\n", *nb);
}
