#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str;
	int		*nb;

	int		i;

	str = (char *)ft_memalloc(3);
	i = 0;
	while (i < 3)
	{
		printf("str[i] whatever it is: %c\n", str[i]);
		str[i] = 'A';
		i++;
	}
	i = 0;
	while (i < 3)
	{
		printf("and now str[i]: %c\n", str[i]);
		i++;
	}

	nb = (int *)ft_memalloc(4);
	*nb = 56;
	printf("\nthe int: %i\n", *nb);
}
