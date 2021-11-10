#include <stdio.h>
#include "../libft.h"
#include <string.h>
#include "tests.h"

int	main(void)
{
	char	s1[10] = "abcdeabcd";
	char	s2[10] = "abcdeab6d";
	char	*desc1 = ft_strjoin("string 1: '", s1);
	size_t	n1 = 5;
	print_test_descr(ft_strjoin(desc1, "', string 2: "), s2);
	print_test_descr("n", ft_itoa(n1));
	int	r1_ft = ft_strncmp(s1, s2, n1);
	int	r1 = strncmp(s1, s2, n1);
	print_test_rslt_int(r1, r1_ft, r1 - r1_ft == 0);

	char	s3[4] = "abd";
	char	s4[4] = "abc";
	char	*desc2 = ft_strjoin("string 1: '", s3);
	size_t	n2 = 3;
	print_test_descr(ft_strjoin(desc2, "', string 2: "), s4);
	print_test_descr("n", ft_itoa(n2));
	int	r2_ft = ft_strncmp(s3, s4, n2);
	int	r2 = strncmp(s3, s4, n2);
	print_test_rslt_int(r2, r2_ft, r2 - r2_ft == 0);
	

	char	s5[4] = "abc";
	char	s6[1] = "";
	char	*desc3 = ft_strjoin("string 1: '", s5);
	size_t	n3 = 5;
	print_test_descr(ft_strjoin(desc3, "', string 2: "), s6);
	print_test_descr("n", ft_itoa(n3));
	int	r3_ft = ft_strncmp(s5, s6, n3);
	int	r3 = strncmp(s5, s6, n3);
	print_test_rslt_int(r3, r3_ft, r3 - r3_ft == 0);
	
	char	s7[1] = "";
	char	s8[1] = "";
	char	*desc4 = ft_strjoin("string 1: '", s7);
	size_t	n4 = 5;
	print_test_descr(ft_strjoin(desc4, "', string 2: "), s8);
	print_test_descr("n", ft_itoa(n4));
	int	r4_ft = ft_strncmp(s7, s8, n4);
	int	r4 = strncmp(s7, s8, n4);
	print_test_rslt_int(r4, r4_ft, r4 - r4_ft == 0);
}
