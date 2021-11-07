#include <ctype.h>
#include <stdio.h>
#include "../libft.h"
#include "tests.h"

int	main(void)
{
	char	*c1 = "a";
	print_test_descr("character", c1);
	print_test_rslt_int(isprint(*c1), ft_isprint(*c1), isprint(*c1) == ft_isprint(*c1));

	char	*c3 = "7";
	print_test_descr("character", c3);
	print_test_rslt_int(isprint(*c3), ft_isprint(*c3), isprint(*c3) == ft_isprint(*c3));

	char	*c5 = "%";
	print_test_descr("character", c5);
	print_test_rslt_int(isprint(*c5), ft_isprint(*c5), isprint(*c5) == ft_isprint(*c5));

	char	*c6 = "🐶";
	print_test_descr("character", c6);
	print_test_rslt_int(isprint(*c6), ft_isprint(*c6), isprint(*c6) == ft_isprint(*c6));

	char	*c2 = "\0";
	print_test_descr("character", "\\0");
	print_test_rslt_int(isprint(*c2), ft_isprint(*c2), isprint(*c2) == ft_isprint(*c2));

	int	c4 = 0177;
	print_test_descr("character", "0177");
	print_test_rslt_int(isprint(c4), ft_isprint(c4), isprint(c4) == ft_isprint(c4));
}
