#include <string.h>
#include "../libft.h"
#include <stdio.h>
#include "tests.h"

int	main(void)
{
	char	*src1 = "abc";
	char	dst1_ft[4];
	char	dst1[4];
	size_t		n1 = 3;
	dst1[3] = '\0';
	dst1_ft[3] = '\0';
	print_test_descr("src string", src1);
	ft_memmove(dst1_ft, src1, n1);
	memmove(dst1, src1, n1);
	print_test_rslt_str(dst1, dst1_ft, ft_strcmp(dst1, dst1_ft) == 0);

	// overlapping strings
	char	src2[14] = "hello hey";
	char	src2_ft[14];
	char	*dst2;
	char	*dst2_ft;
	size_t		n2 = 9;
	ft_strcpy(src2_ft, src2);
	dst2 = &src2[4];
	dst2_ft = &src2_ft[4];
	dst2[9] = '\0';
	dst2_ft[9] = '\0';
	print_test_descr("test with overlapping strings. dest = src[4]. src is", src2);
	ft_memmove(dst2_ft, src2_ft, n2);
	memmove(dst2, src2, n2);
	print_test_rslt_str(dst2, dst2_ft, ft_strcmp(dst2, dst2_ft) == 0);

	char	dst3[14];
	char	dst3_ft[14];
	char	*src3;
	char	*src3_ft;
	size_t		n3 = 9;
	src3 = &dst3[4];
	src3_ft = &dst3_ft[4];
	src3[0] = 'h';
	src3[1] = 'e';
	src3[2] = 'l';
	src3[3] = 'l';
	src3[4] = 'o';
	src3[5] = ' ';
	src3[6] = 'h';
	src3[7] = 'e';
	src3[8] = 'y';
	src3[9] = '\0';
	ft_strcpy(src3_ft, src3);
	print_test_descr("test with overlapping strings. src = dest[4]. src is", src3);
	ft_memmove(dst3_ft, src3_ft, n3);
	memmove(dst3, src3, n3);
	print_test_rslt_str(dst3, dst3_ft, ft_strcmp(dst3, dst3_ft) == 0);
}

