#include <string.h>
#include <stdio.h>
#include "../libft.h"
#include "tests.h"

int	main(void)
{
	// string 'abc'
	char	src1[4] = "abc";
	char	dst1_ft[4];
	char	dst1[4];
	size_t	n1 = 4;
	print_test_descr("src string", src1);
	ft_strncpy(dst1_ft, src1, n1);
	strncpy(dst1, src1, n1);
	print_test_rslt_str(dst1, dst1_ft, ft_strcmp(dst1, dst1_ft) == 0);

	// string 'abc'
	char	src2[4] = "abc";
	char	dst2_ft[7];
	char	dst2[7];
	size_t	n2 = 7;
	print_test_descr("src string", src2);
	ft_strncpy(dst2_ft, src2, n2);
	strncpy(dst2, src2, n2);
	print_test_rslt_str(dst2, dst2_ft, ft_strcmp(dst2, dst2_ft) == 0);

	// string 'abc'
	char	src3[4] = "abc";
	char	dst3_ft[4];
	char	dst3[4];
	size_t	n3 = 2;
	print_test_descr("src string", src3);
	ft_strncpy(dst3_ft, src3, n3);
	strncpy(dst3, src3, n3);
	print_test_rslt_str(dst3, dst3_ft, ft_strcmp(dst3, dst3_ft) == 0);
}
