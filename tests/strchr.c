#include <string.h>
#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	s1[10] = "abcde";
	char	c1 = 'b';

	printf("this is s1: %s\n", s1);
	printf("and this is the returned string: %s", ft_strchr(s1, c1));
	printf("\nthis is the result zith the real strchr: %s\n", strchr(s1, c1));
}

/*
found this on stack overflow this is n e a t:
char *strchr(const char *s, int c){
    while (*s != (char)c)
        if (!*s++)
            return 0;
    return (char *)s;
}
*/