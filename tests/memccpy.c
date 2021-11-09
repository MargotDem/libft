#include <string.h>
#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include "tests.h"

int	main(void)
{
	// string "abc", char 'c'
	char	*src1 = "abc";
	char	dst1_ft[4];
	char	dst1[4];
	size_t		n1 = 4;
	char	c1 = 'd';
	print_test_descr("src string", src1);
	ft_memccpy(dst1_ft, src1, c1, n1);
	memccpy(dst1, src1, c1, n1);
	print_test_rslt_str(dst1, dst1_ft, ft_strcmp(dst1, dst1_ft) == 0);

	// string "abcd efgh", char 'e'
	char	*src2 = "abcd efgh";
	char	dst2_ft[10];
	char	dst2[10];
	size_t	n2 = 10;
	char	c2 = 'e';
	int j = 0;
	while (j < 10)
	{
		dst2[j] = '\0';
		dst2_ft[j] = '\0';
		j++;
	}
	print_test_descr("src string", src2);
	ft_memccpy(dst2_ft, src2, c2, n2);
	memccpy(dst2, src2, c2, n2);
	print_test_rslt_str(dst2, dst2_ft, ft_strcmp(dst2, dst2_ft) == 0);
}
