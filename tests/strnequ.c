#include <stdio.h>
#include "../libft.h"
#include "tests.h"

int	main(void)
{
	char	str1[4] = "abc";
	char	str2[4] = "abc";
	size_t	n1 = 4;
	print_test_descr(ft_strjoin(ft_strjoin("string 1: '", str1), "', string 2"), str2);
	printf("\nresult of ft_strnequ: %i\n", ft_strnequ(str1, str2, n1));


	printf("\n\n");

	char	str3[4] = "abc";
	char	str4[4] = "";
	size_t	n2 = 3;
	print_test_descr(ft_strjoin(ft_strjoin("string 1: '", str3), "', string 2"), str4);
	printf("\nresult of ft_strnequ: %i\n", ft_strnequ(str3, str4, n2));

	printf("\n\n");

	char	str5[5] = "abcd";
	char	str6[5] = "abce";
	size_t	n3 = 3;
	print_test_descr(ft_strjoin(ft_strjoin("string 1: '", str5), "', string 2"), str6);
	printf("\nresult of ft_strnequ: %i\n", ft_strnequ(str5, str6, n3));
}
