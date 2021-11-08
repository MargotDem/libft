#include <stdio.h>
#include "../libft.h"
#include <string.h>
#include "tests.h"

int	main(void)
{
	char	s1[10] = "abcdeabcd";
	char	s2[10] = "abcdeab6d";
	char	*desc1 = ft_strjoin("string 1: '", s1);
	print_test_descr(ft_strjoin(desc1, "', string 2: "), s2);
	print_test_rslt_int(strcmp(s1, s2), ft_strcmp(s1, s2), strcmp(s1, s2) - ft_strcmp(s1, s2) == 0);

	char	s3[4] = "abc";
	char	s4[4] = "abc";
	char	*desc2 = ft_strjoin("string 1: '", s3);
	print_test_descr(ft_strjoin(desc2, "', string 2: "), s4);
	print_test_rslt_int(strcmp(s3, s4), ft_strcmp(s3, s4), strcmp(s3, s4) - ft_strcmp(s3, s4) == 0);

	char	s5[4] = "abc";
	char	s6[1] = "";
	char	*desc3 = ft_strjoin("string 1: '", s5);
	print_test_descr(ft_strjoin(desc3, "', string 2: "), s6);
	print_test_rslt_int(strcmp(s5, s6), ft_strcmp(s5, s6), strcmp(s5, s6) - ft_strcmp(s5, s6) == 0);


	char	s7[1] = "";
	char	s8[1] = "";
	char	*desc4 = ft_strjoin("string 1: '", s7);
	print_test_descr(ft_strjoin(desc4, "', string 2: "), s8);
	print_test_rslt_int(strcmp(s7, s8), ft_strcmp(s7, s8), strcmp(s7, s8) - ft_strcmp(s7, s8) == 0);
}
