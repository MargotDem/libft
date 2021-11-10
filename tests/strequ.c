#include <stdio.h>
#include "../libft.h"
#include "tests.h"

int	main(void)
{
	char	str1[4] = "abc";
	char	str2[4] = "abc";
	ft_strjoin("string 1: '", str1);
	print_test_descr(ft_strjoin(ft_strjoin("string 1: '", str1), "', string 2"), str2);
	printf("\nresult of ft_strequ: %i\n", ft_strequ(str1, str2));


	printf("\n\n");

	char	str3[4] = "abc";
	char	str4[4] = "";
	ft_strjoin("string 1: '", str3);
	print_test_descr(ft_strjoin(ft_strjoin("string 1: '", str3), "', string 2"), str4);
	printf("\nresult of ft_strequ: %i\n", ft_strequ(str3, str4));
}
