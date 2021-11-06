#include <ctype.h>
#include <stdio.h>
#include "../libft.h"
#include "tests.h"

int	main(void)
{
	char	*c1 = "a";
	print_test_descr("character", c1);
	print_test_rslt_int(isalpha(*c1), ft_isalpha(*c1), isalpha(*c1) == ft_isalpha(*c1));
	
	char	*c2 = "K";
	print_test_descr("character", c2);
	print_test_rslt_int(isalpha(*c2), ft_isalpha(*c2), isalpha(*c2) == ft_isalpha(*c2));
	
	char	*c3 = "4";
	print_test_descr("character", c3);
	print_test_rslt_int(isalpha(*c3), ft_isalpha(*c3), isalpha(*c3) == ft_isalpha(*c3));
	
	char	*c4 = "\n";
	print_test_descr("character", "\\n");
	print_test_rslt_int(isalpha(*c4), ft_isalpha(*c4), isalpha(*c4) == ft_isalpha(*c4));

	char	*c5 = "\0";
	print_test_descr("character", "\\0");
	print_test_rslt_int(isalpha(*c5), ft_isalpha(*c5), isalpha(*c5) == ft_isalpha(*c5));
}
