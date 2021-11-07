#include <ctype.h>
#include <stdio.h>
#include "../libft.h"
#include "tests.h"

int	main(void)
{
	char	*c1 = "a";
	print_test_descr("character", c1);
	print_test_rslt_int(isalnum(*c1), ft_isalnum(*c1), isalnum(*c1) == ft_isalnum(*c1));

	char	*c2 = "\0";
	print_test_descr("character", "\\0");
	print_test_rslt_int(isalnum(*c2), ft_isalnum(*c2), isalnum(*c2) == ft_isalnum(*c2));

	char	*c3 = "7";
	print_test_descr("character", c3);
	print_test_rslt_int(isalnum(*c3), ft_isalnum(*c3), isalnum(*c3) == ft_isalnum(*c3));

	char	*c4 = "0";
	print_test_descr("character", c4);
	print_test_rslt_int(isalnum(*c4), ft_isalnum(*c4), isalnum(*c4) == ft_isalnum(*c4));
}
