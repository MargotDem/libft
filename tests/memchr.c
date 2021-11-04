//#include <string.h>
#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	s1[10] = "abcde";
	char	c1 = 'd';
	size_t	n;

	n = 4;
	printf("this is s1: %s\n", s1);
	printf("and this is the returned string from ft_memchr: %s", ft_memchr(s1, c1, n));
	printf("\nthis is the result zith the real memchr: %s\n", ft_memchr(s1, c1, n));
}
