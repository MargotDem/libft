#include <stdio.h>
#include "../libft.h"
#include "tests.h"
#include <string.h>

int	main(void)
{
	char	str1[20] = "test string1";
	print_test_descr("the string to duplicate", str1);
	char	*r1 = strdup(str1);
	char	*r1_ft = ft_strdup(str1);
	print_test_rslt_str(r1, r1_ft, ft_strcmp(r1, r1_ft) == 0);

	char	str2[1] = "";
	print_test_descr("empty string", str2);
	char	*r2 = strdup(str2);
	char	*r2_ft = ft_strdup(str2);
	print_test_rslt_str(r2, r2_ft, ft_strcmp(r2, r2_ft) == 0);
}
