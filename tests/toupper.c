#include <ctype.h>
#include "../libft.h"
#include <stdio.h>
#include "tests.h"

int	main(void)
{
	char	*c1 = "a";
	print_test_descr("character", c1);
	print_test_rslt_char(toupper(*c1), ft_toupper(*c1), toupper(*c1) == ft_toupper(*c1));

	char	*c2 = "A";
	print_test_descr("character", c2);
	print_test_rslt_char(toupper(*c2), ft_toupper(*c2), toupper(*c2) == ft_toupper(*c2));

	char	*c3 = "7";
	print_test_descr("character", c3);
	print_test_rslt_char(toupper(*c3), ft_toupper(*c3), toupper(*c3) == ft_toupper(*c3));

	char	*c4 = "!";
	print_test_descr("character", c4);
	print_test_rslt_char(toupper(*c4), ft_toupper(*c4), toupper(*c4) == ft_toupper(*c4));
	
	char	*c5 = "p";
	print_test_descr("character", c5);
	print_test_rslt_char(toupper(*c5), ft_toupper(*c5), toupper(*c5) == ft_toupper(*c5));
}
