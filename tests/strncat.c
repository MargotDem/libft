#include <string.h>
#include "../libft.h"
#include <stdio.h>
#include "tests.h"

int	main(void)
{
	char	s1_ft[10] = "abcde";
	char	s1[10];
	char	s2[5] = "efgh";
	size_t	n1 = 4;
	ft_strcpy(s1, s1_ft);
	char	*desc1 = ft_strjoin("src string: '", s1);
	print_test_descr(ft_strjoin(desc1, "', string to cat"), s2);
	ft_strncat(s1_ft, s2, n1);
	strncat(s1, s2, n1);
	print_test_rslt_str(s1, s1_ft, ft_strcmp(s1, s1_ft) == 0);

	char	s3_ft[10] = "abcde";
	char	s3[10];
	char	s4[5] = "efgh";
	size_t	n2 = 2;
	ft_strcpy(s3, s3_ft);
	char	*desc2 = ft_strjoin("src string: '", s3);
	print_test_descr(ft_strjoin(desc2, "', string to cat"), s4);
	ft_strncat(s3_ft, s4, n2);
	strncat(s3, s4, n2);
	print_test_rslt_str(s3, s3_ft, ft_strcmp(s3, s3_ft) == 0);
}
