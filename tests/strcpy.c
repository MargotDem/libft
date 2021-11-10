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
	print_test_descr("src string", src1);
	ft_strcpy(dst1_ft, src1);
	strcpy(dst1, src1);
	print_test_rslt_str(dst1, dst1_ft, ft_strcmp(dst1, dst1_ft) == 0);

	// empty string
	char	src2[1] = "";
	char	dst2_ft[1];
	char	dst2[1];
	print_test_descr("src string", src2);
	ft_strcpy(dst2_ft, src2);
	strcpy(dst2, src2);
	print_test_rslt_str(dst2, dst2_ft, ft_strcmp(dst2, dst2_ft) == 0);
}
