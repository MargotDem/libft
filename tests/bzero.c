#include <strings.h>
#include "../libft.h"
#include <stdio.h>
#include "tests.h"

int	main(void)
{
	char	str1_ft[4];
	char	str1[4];
	int		n1 = 3;
	str1_ft[0] = 'a';
	str1_ft[1] = 'b';
	str1_ft[2] = 'c';
	str1[0] = 'a';
	str1[1] = 'b';
	str1[2] = 'c';
	str1_ft[3] = '\0';
	str1[3] = '\0';
	char	*desc1 = ft_strjoin("string ft: '", str1_ft);
	print_test_descr(ft_strjoin(desc1, "', string lib: "), str1);
	ft_bzero((void *)str1_ft, n1);
	bzero((void *)str1, n1);

	print_test_rslt_str(str1, str1_ft, ft_strcmp(str1_ft, str1) == 0);
}
