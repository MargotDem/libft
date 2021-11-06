#include <ctype.h>
#include <stdio.h>
#include "../libft.h"
#include "tests.h"

int	main(void)
{
	char	*c1 = "a";
	print_test_descr("character", c1);
	print_test_rslt_int(isdigit(*c1), ft_isdigit(*c1), isdigit(*c1) == ft_isdigit(*c1));

	char	*c2 = "\\0";
	print_test_descr("character", "\\0");
	print_test_rslt_int(isdigit(*c2), ft_isdigit(*c2), isdigit(*c2) == ft_isdigit(*c2));

	char	*c3 = "7";
	print_test_descr("character", c3);
	print_test_rslt_int(isdigit(*c3), ft_isdigit(*c3), isdigit(*c3) == ft_isdigit(*c3));

	char	*c4 = "0";
	print_test_descr("character", c4);
	print_test_rslt_int(isdigit(*c4), ft_isdigit(*c4), isdigit(*c4) == ft_isdigit(*c4));
}
