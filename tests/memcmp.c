#include <string.h>
#include <stdio.h>
#include "../libft.h"
#include "tests.h"

int	main(void)
{
	char	s1[10] = "abcdeabcd";
	char	s2[10] = "abcdeab6d";
	int		n1 = 9;
	char	*desc1 = ft_strjoin("string 1: '", s1);
	print_test_descr(ft_strjoin(desc1, "', string 2: "), s2);
	int		r1 = memcmp(s1, s2, n1);
	int		r1_ft = ft_memcmp(s1, s2, n1);
	print_test_rslt_int(r1, r1_ft, r1 - r1_ft == 0);

	char	s3[4] = "abc";
	char	s4[4] = "abc";
	int		n2 = 3;
	char	*desc2 = ft_strjoin("string 1: '", s3);
	print_test_descr(ft_strjoin(desc2, "', string 2: "), s4);
	int		r2 = memcmp(s3, s4, n2);
	int		r2_ft = ft_memcmp(s3, s4, n2);
	print_test_rslt_int(r2, r2_ft, r2 - r2_ft == 0);

	char	s5[1] = "";
	char	s6[1] = "";
	int		n3 = 1;
	char	*desc3 = ft_strjoin("string 1: '", s5);
	print_test_descr(ft_strjoin(desc3, "', string 2: "), s6);
	int		r3 = memcmp(s5, s6, n3);
	int		r3_ft = ft_memcmp(s5, s6, n3);
	print_test_rslt_int(r3, r3_ft, r3 - r3_ft == 0);

	int	i1 = 12;
	int	i2 = 12;
	int	n4 = 4;
	char	*desc4 = ft_strjoin("int 1: '", ft_itoa(i1));
	print_test_descr(ft_strjoin(desc4, "', int 2: "), ft_itoa(i2));
	int		r4= memcmp(&i1, &i2, n4);
	int		r4_ft = ft_memcmp(&i1, &i2, n4);
	print_test_rslt_int(r4, r4_ft, r4 - r4_ft == 0);

	int	i3 = 12;
	int	i4 = 60;
	int	n5 = 4;
	char	*desc5 = ft_strjoin("int 1: '", ft_itoa(i3));
	print_test_descr(ft_strjoin(desc5, "', int 2: "), ft_itoa(i4));
	int		r5= memcmp(&i3, &i4, n5);
	int		r5_ft = ft_memcmp(&i3, &i4, n5);
	print_test_rslt_int(r5, r5_ft, r5 - r5_ft == 0);
}
