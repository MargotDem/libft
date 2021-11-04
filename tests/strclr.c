#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	s1[4];
	int		i;

	s1[0] = 'a';
	s1[1] = 'b';
	s1[2] = 'c';
	s1[3] = '\n';
	printf("this is s1: %s\n", s1);
	i = 0;
	while (i < 3)
	{
		printf("this is s[%i]: %c\n", i, s1[i]);
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
