#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include "tests.h"

int	main(void)
{
	char	*str1 = " -900(8s";
	print_test_descr("the string", str1);
	int	r1 = atoi(str1);
	int	r1_ft = ft_atoi(str1);
	print_test_rslt_int(r1, r1_ft, r1 == r1_ft);

	char	*str2 = " - 3";
	print_test_descr("the string", str2);
	int	r2 = atoi(str2);
	int	r2_ft = ft_atoi(str2);
	print_test_rslt_int(r2, r2_ft, r2 == r2_ft);

	char	*str3 = "  +85";
	print_test_descr("the string", str3);
	int	r3 = atoi(str3);
	int	r3_ft = ft_atoi(str3);
	print_test_rslt_int(r3, r3_ft, r3 == r3_ft);

	char	*str4 = "2147483647";
	print_test_descr("the string", str4);
	int	r4 = atoi(str4);
	int	r4_ft = ft_atoi(str4);
	print_test_rslt_int(r4, r4_ft, r4 == r4_ft);

	char	*str5 = "-2147483648";
	print_test_descr("the string", str5);
	int	r5 = atoi(str5);
	int	r5_ft = ft_atoi(str5);
	print_test_rslt_int(r5, r5_ft, r5 == r5_ft);

	char	*str6 = "214748365685";
	print_test_descr("the string", str6);
	int	r6 = atoi(str6);
	int	r6_ft = ft_atoi(str6);
	print_test_rslt_int(r6, r6_ft, r6 == r6_ft);
}
