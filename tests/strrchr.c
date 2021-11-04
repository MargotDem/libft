#include <string.h>
#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	s1[10] = "abcdebkbl";
	char	c1 = 'b';

	char	s2[5] = "abcd";
	char	c2 = '\0';

	printf("\n");

	printf("s1 is: %s, c1 is: %c, and the result of ft_strrchr(s1, c1): %s\n", s1, c1, ft_strrchr(s1, c1));
	printf("and this is the result with the real strchr: %s\n\n", strrchr(s1, c1));

	printf("s2 is: %s, c2 is: '\\0', and the result of ft_strrchr(s2, c2): %p\n", s2, ft_strrchr(s2, c2));
	printf("and this is the result with the real strchr: %p\n\n", strrchr(s2, c2));
}
