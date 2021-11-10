#include <stdio.h>
#include "../libft.h"
#include "tests.h"

int	main(void)
{
	char	s1[4] = "abc";
	char	s2[4] = "def";

	print_test_descr(ft_strjoin(ft_strjoin("string 1: '", s1), "', string 2"), s2);
	printf("\nresult of ft_strjoin: %s\n", ft_strjoin(s1, s2));

	printf("\n\n");

	char	s3[4] = "abc";
	char	s4[1] = "";

	print_test_descr(ft_strjoin(ft_strjoin("string 1: '", s3), "', string 2"), s4);
	printf("\nresult of ft_strjoin: %s\n", ft_strjoin(s3, s4));
}
