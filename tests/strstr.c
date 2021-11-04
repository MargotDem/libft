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

	const char *largestring = "abcbcdjk";
	const char *smallstring = "bcd";

	printf("result with my strstr: %s\n", ft_strstr(largestring, smallstring));
	printf("result with real strstr: %s\n", strstr(largestring, smallstring));
}

/*
 * special case: neede is bigger than string
 * secial case. needle is empty
 * sp: theres partial mtch at the end of haystack like abcde and def
 * 
 * 
 */