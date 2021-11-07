#include <ctype.h>
#include <stdio.h>
#include "../libft.h"
#include "tests.h"

int	main(void)
{
	char	*c1 = "a";
	print_test_descr("character", c1);
	print_test_rslt_int(isascii(*c1), ft_isascii(*c1), isascii(*c1) == ft_isascii(*c1));

	char	*c2 = "\\0";
	print_test_descr("character", "\\0");
	print_test_rslt_int(isascii(*c2), ft_isascii(*c2), isascii(*c2) == ft_isascii(*c2));

	char	*c3 = "7";
	print_test_descr("character", c3);
	print_test_rslt_int(isascii(*c3), ft_isascii(*c3), isascii(*c3) == ft_isascii(*c3));

	int	c4 = 0177;
	print_test_descr("character", "0177");
	print_test_rslt_int(isascii(c4), ft_isascii(c4), isascii(c4) == ft_isascii(c4));

	char	*c5 = "£";
	print_test_descr("character", c5);
	print_test_rslt_int(isascii(*c5), ft_isascii(*c5), isascii(*c5) == ft_isascii(*c5));

	char	*c6 = "🐶";
	print_test_descr("character", c6);
	print_test_rslt_int(isascii(*c6), ft_isascii(*c6), isascii(*c6) == ft_isascii(*c6));

	char	*c7 = "त";
	print_test_descr("character", c7);
	print_test_rslt_int(isascii(*c7), ft_isascii(*c7), isascii(*c7) == ft_isascii(*c7));
}
