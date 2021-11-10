#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	s1[4] = "abc";
	int		i;

	printf("this is s1:\n");
	i = 0;
	while (i < 3)
	{
		printf("s[%i]: %c\n", i, s1[i]);
		i++;
	}
	ft_strclr(s1);
	i = 0;
	while (i < 3)
	{
		printf("this is s[%i] now after strclr: %i\n", i, s1[i]);
		i++;
	}
}
