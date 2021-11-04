//#include <string.h>
#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	s1[10] = "abcde";
	char	s2[5] = "efgh";

	ft_strcat(s1, s2);
	printf("this is s1 now: %s\n", s1);
}
