#include <string.h>
#include "../libft.h"
#include <stdio.h>
#include "tests.h"

int	main(void)
{
	char	s1[6] = "1b345";
	int		n1 = 6;
	char	c1 = 'b';
	char	*desc1 = ft_strjoin("string: ", s1);
	print_test_descr(ft_strjoin(desc1, ", char: "), &c1);
	print_test_descr_plus("n", ft_itoa(n1));
	print_test_rslt_str(memchr(s1, c1, n1), ft_memchr(s1, c1, n1), memchr(s1, c1, n1) == ft_memchr(s1, c1, n1));

	char	s2[5] = "ab8d";
	int		n2 = 5;
	char	c2 = '8';
	char	*desc2 = ft_strjoin("string: ", s2);
	print_test_descr(ft_strjoin(desc2, ", char: "), &c2);
	print_test_descr_plus("n", ft_itoa(n2));
	print_test_rslt_str(memchr(s2, c2, n2), ft_memchr(s2, c2, n2), memchr(s2, c2, n2) == ft_memchr(s2, c2, n2));

	char	s3[4] = "abc";
	int		n3 = 4;
	char	c3 = '\0';
	char	*desc3 = ft_strjoin("string: ", s3);
	print_test_descr(ft_strjoin(desc3, ", char: "), "\\0");
	print_test_descr_plus("n", ft_itoa(n3));
	print_test_rslt_str(memchr(s3, c3, n3), ft_memchr(s3, c3, n3), memchr(s3, c3, n3) == ft_memchr(s3, c3, n3));

	char	s4[4] = "abc";
	int		n4 = 4;
	char	c4 = 'd';
	char	*desc4 = ft_strjoin("string: ", s4);
	print_test_descr(ft_strjoin(desc4, ", char: "), &c4);
	print_test_descr_plus("n", ft_itoa(n4));
	print_test_rslt_str(memchr(s4, c4, n4), ft_memchr(s4, c4, n4), memchr(s4, c4, n4) == ft_memchr(s4, c4, n4));

	char	s5[7] = "abcdef";
	int		n5 = 3;
	char	c5 = 'd';
	char	*desc5 = ft_strjoin("string: ", s5);
	print_test_descr(ft_strjoin(desc5, ", char: "), &c5);
	print_test_descr_plus("n", ft_itoa(n5));
	print_test_rslt_str(memchr(s5, c5, n5), ft_memchr(s5, c5, n5), memchr(s5, c5, n5) == ft_memchr(s5, c5, n5));

/*
	char	*s6 ;
	s6 = NULL;
	int		n6 = 3;
	char	c6 = 'd';
	print_test_descr("null string, char", &c6);
	print_test_descr_plus("n", ft_itoa(n6));
	print_test_rslt_str("does not segfault", ft_memchr(s6, c6, n6), 1);
*/

	char	s7[1] = "";
	int		n7 = 1;
	char	c7 = 'd';
	print_test_descr("(empty string), char: ", &c7);
	print_test_descr_plus("n", ft_itoa(n7));
	print_test_rslt_str(memchr(s7, c7, n7), ft_memchr(s7, c7, n7), memchr(s7, c7, n7) == ft_memchr(s7, c7, n7));

	/*
	char	s7[4] = "abc";
	int		n7 = 10;
	char	c7 = 'd';
	char	*desc7 = ft_strjoin("string: ", s7);
	print_test_descr(ft_strjoin(desc7, ", char: "), &c7);
	print_test_descr_plus("n", ft_itoa(n7));
	print_test_rslt_str(memchr(s7, c7, n7), ft_memchr(s7, c7, n7), memchr(s7, c7, n7) == ft_memchr(s7, c7, n7));
	*/
}
