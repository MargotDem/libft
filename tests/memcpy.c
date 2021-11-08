#include <string.h>
#include "../libft.h"
#include <stdio.h>
#include "tests.h"

int	main(void)
{
	// string 'abc'
	char	src1[4];
	char	dst1_ft[4];
	char	dst1[4];
	size_t		n1 = 3;
	src1[0] = 'a';
	src1[1] = 'b';
	src1[2] = 'c';
	src1[3] = '\0';
	dst1[3] = '\0';
	dst1_ft[3] = '\0';
	print_test_descr("src string", src1);
	ft_memcpy(dst1_ft, src1, n1);
	memcpy(dst1, src1, n1);
	print_test_rslt_str(dst1, dst1_ft, ft_strcmp(dst1, dst1_ft) == 0);

	// overlapping strings, behavior undefined
	char	src2[14];
	char	src2_ft[14];
	char	*dst2;
	char	*dst2_ft;
	size_t		n2 = 9;
	src2[0] = 'h';
	src2[1] = 'e';
	src2[2] = 'l';
	src2[3] = 'l';
	src2[4] = 'o';
	src2[5] = ' ';
	src2[6] = 'h';
	src2[7] = 'e';
	src2[8] = 'y';
	src2[9] = '\0';
	ft_strcpy(src2_ft, src2);
	dst2 = &src2[4];
	dst2_ft = &src2_ft[4];
	dst2[9] = '\0';
	dst2_ft[9] = '\0';
	print_test_descr("test with overlapping strings, behavior undefined. src string", src2);
	ft_memcpy(dst2_ft, src2_ft, n2);
	memcpy(dst2, src2, n2);
	print_test_rslt_str(dst2, dst2_ft, 1);
}
