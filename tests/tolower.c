#include <ctype.h>
#include "../libft.h"
#include <stdio.h>
#include "tests.h"

int	main(void)
{
	char	*c1 = "a";
	print_test_descr("character", c1);
	print_test_rslt_char(tolower(*c1), ft_tolower(*c1), tolower(*c1) == ft_tolower(*c1));

	char	*c2 = "A";
	print_test_descr("character", c2);
	print_test_rslt_char(tolower(*c2), ft_tolower(*c2), tolower(*c2) == ft_tolower(*c2));

	char	*c3 = "7";
	print_test_descr("character", c3);
	print_test_rslt_char(tolower(*c3), ft_tolower(*c3), tolower(*c3) == ft_tolower(*c3));

	char	*c4 = "!";
	print_test_descr("character", c4);
	print_test_rslt_char(tolower(*c4), ft_tolower(*c4), tolower(*c4) == ft_tolower(*c4));
	
	char	*c5 = "U";
	print_test_descr("character", c5);
	print_test_rslt_char(tolower(*c5), ft_tolower(*c5), tolower(*c5) == ft_tolower(*c5));
}
