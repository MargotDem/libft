#include <stdio.h>
#include "../libft.h"
#include "tests.h"

int	main(void)
{
	char	*str1 = "";
	print_test_descr("empty string");
	printf("'%s'", str1);
	print_test_rslt_int(strlen(str1), ft_strlen(str1), strlen(str1) == ft_strlen(str1));

	char	*str2 = "c";
	print_test_descr("one character string");
	printf("'%s'", str2);
	print_test_rslt_int(strlen(str2), ft_strlen(str2), strlen(str2) == ft_strlen(str2));

	char	*str3 = "hello this is a longer string";
	print_test_descr("a longer string");
	printf("'%s'", str3);
	print_test_rslt_int(strlen(str3), ft_strlen(str3), strlen(str3) == ft_strlen(str3));

	char	*str4 = NULL;
	print_test_descr("NULL input");
	printf("'%s'", str4);
	print_test_rslt_str("no segfault", ft_itoa(ft_strlen(str4)), 1);
}

