#include <string.h>
#include "../libft.h"
#include <stdio.h>
#include "tests.h"

int	main(void)
{
	char	s1_ft[10] = "abcde";
	char	s1[10];
	char	s2[5] = "efgh";

	ft_strcpy(s1, s1_ft);
	char	*desc1 = ft_strjoin("src string: '", s1);
	print_test_descr(ft_strjoin(desc1, "', string to cat"), s2);
	ft_strcat(s1_ft, s2);
	strcat(s1, s2);
	print_test_rslt_str(s1, s1_ft, ft_strcmp(s1, s1_ft) == 0);
}
