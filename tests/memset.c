#include <string.h>
#include "../libft.h"
#include <stdio.h>
#include "tests.h"

int	main(void)
{
	char	str1_ft[10];
	char	str1[10];
	char	*c1 = "v";
	int		n1 = 9;
	char	*desc1 = ft_strjoin("string ft: '", str1_ft);
	print_test_descr(ft_strjoin(desc1, "', string lib: "), str1);
	print_test_descr_plus("char", c1);
	char	*returned_str1_ft = ft_memset((void *)str1_ft, *c1, n1);
	char	*returned_str1 = memset((void *)str1, *c1, n1);
	str1_ft[9] = '\0';
	str1[9] = '\0';
	print_test_rslt_str(returned_str1, returned_str1_ft, ft_strcmp(returned_str1_ft, returned_str1) == 0);

	char	*str2_ft = NULL;
	char	*c2 = "v";
	int		n2 = 1;
	print_test_descr("null string", str2_ft);
	print_test_descr_plus("char", c2);
	char	*returned_str2_ft = ft_memset((void *)str2_ft, *c2, n2);
	print_test_rslt_str("no segfault", returned_str2_ft, 1);
	// the original memset segfaults obviously:
	//char	*str2 = NULL;
	//char	*returned_str2 = memset((void *)str2, *c2, n2);
	//(void)returned_str2;

	char	str3_ft[1];
	char	str3[1];
	char	*c3 = "o";
	int		n3 = 1;
	char	*desc3 = ft_strjoin("string ft: '", str3_ft);
	print_test_descr(ft_strjoin(desc3, "', string lib: "), str3);
	print_test_descr_plus("char", c3);
	char	*returned_str3_ft = ft_memset((void *)str3_ft, *c3, n3);
	char	*returned_str3 = memset((void *)str3, *c3, n3);
	str3_ft[0] = '\0';
	str3[0] = '\0';
	print_test_rslt_str(returned_str3, returned_str3_ft, ft_strcmp(returned_str3_ft, returned_str3) == 0);
}
