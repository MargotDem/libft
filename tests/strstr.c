#include <string.h>
#include "../libft.h"
#include <stdio.h>

int	main(void)
{

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