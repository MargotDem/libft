#include <string.h>
#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	/*char	s1[10] = "abcdebkbl";
	char	n1[4] = "bkb";


	printf("\n");

	printf("s1 is: %s, n1 is: %s, and the result of ft_strstr(s1, n1): %s\n", s1, n1, ft_strstr(s1, n1));
	printf("and this is the result with the real strstr: %s\n\n", strstr(s1, n1));
	*/

	const char *largestring = "abcdefg";
	const char *smallstring = "bcd";
	int	len = 3;

	printf("result with my strstr: %s\n", ft_strnstr(largestring, smallstring, len));
	printf("result with real strstr: %s\n", strnstr(largestring, smallstring, len));
}