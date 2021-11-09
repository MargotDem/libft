#include <string.h>
#include "../libft.h"
#include <stdio.h>
#include "tests.h"

int	main(void)
{
	char	h1[50] = "this is the haystack with the needle in it";
	char	n1[7] = "needle";
	int	len1 = 50;
	char	*desc1 = ft_strjoin("haystack: '", h1);
	print_test_descr(ft_strjoin(desc1, "', needle: "), n1);
	print_test_descr_plus("len is", ft_itoa(len1));
	char	*r1_ft = ft_strnstr(h1, n1, len1);
	char	*r1 = strnstr(h1, n1, len1);
	print_test_rslt_str(r1, r1_ft, ft_strcmp(r1, r1_ft) == 0);

	char	h2[50] = "haystack with a partial match: needull";
	char	n2[7] = "needle";
	int	len2 = 50;
	char	*desc2 = ft_strjoin("haystack: '", h2);
	print_test_descr(ft_strjoin(desc2, "', needle: "), n2);
	print_test_descr_plus("len is", ft_itoa(len2));
	char	*r2_ft = ft_strnstr(h2, n2, len2);
	char	*r2 = strnstr(h2, n2, len2);
	print_test_rslt_str(r2, r2_ft, !r2_ft);

	char	h3[50] = "haystack with a partial match: nee	";
	char	n3[7] = "needle";
	int	len3 = 50;
	char	*desc3 = ft_strjoin("haystack: '", h3);
	print_test_descr(ft_strjoin(desc3, "', needle: "), n3);
	print_test_descr_plus("len is", ft_itoa(len3));
	char	*r3_ft = ft_strnstr(h3, n3, len3);
	char	*r3 = strnstr(h3, n3, len3);
	print_test_rslt_str(r3, r3_ft, !r3_ft);

	char	h4[60] = "this is the haystack and the needle is empty string";
	char	n4[1] = "";
	int	len4 = 60;
	char	*desc4 = ft_strjoin("haystack: '", h4);
	print_test_descr(ft_strjoin(desc4, "', needle: "), n4);
	print_test_descr_plus("len is", ft_itoa(len4));
	char	*r4_ft = ft_strnstr(h4, n4, len4);
	char	*r4 = strnstr(h4, n4, len4);
	print_test_rslt_str(r4, r4_ft, ft_strcmp(r4, r4_ft) == 0);

	char	h5[1] = "";
	char	n5[7] = "needle";
	int	len5 = 10;
	char	*desc5 = ft_strjoin("haystack: '", h5);
	print_test_descr(ft_strjoin(desc5, "', needle: "), n5);
	print_test_descr_plus("len is", ft_itoa(len5));
	char	*r5_ft = ft_strnstr(h5, n5, len5);
	char	*r5 = strnstr(h5, n5, len5);
	print_test_rslt_str(r5, r5_ft, !r5_ft);

	char	h6[6] = "hello";
	char	n6[13] = "hello needle";
	int	len6 = 6;
	char	*desc6 = ft_strjoin("haystack: '", h6);
	print_test_descr(ft_strjoin(desc6, "', needle: "), n6);
	print_test_descr_plus("len is", ft_itoa(len6));
	char	*r6_ft = ft_strnstr(h6, n6, len6);
	char	*r6 = strnstr(h6, n6, len6);
	print_test_rslt_str(r6, r6_ft, !r6_ft);

	char	h7[13] = "hello needle";
	char	n7[7] = "needle";
	int	len7 = 10;
	char	*desc7 = ft_strjoin("haystack: '", h7);
	print_test_descr(ft_strjoin(desc7, "', needle: "), n7);
	print_test_descr_plus("len is", ft_itoa(len7));
	char	*r7_ft = ft_strnstr(h7, n7, len7);
	char	*r7 = strnstr(h7, n7, len7);
	print_test_rslt_str(r7, r7_ft, !r7_ft);

	char	h8[13] = "hello needle";
	char	n8[7] = "needle";
	int	len8 = 13;
	char	*desc8 = ft_strjoin("haystack: '", h8);
	print_test_descr(ft_strjoin(desc8, "', needle: "), n8);
	print_test_descr_plus("len is", ft_itoa(len8));
	char	*r8_ft = ft_strnstr(h8, n8, len8);
	char	*r8 = strnstr(h8, n8, len8);
	print_test_rslt_str(r8, r8_ft, ft_strcmp(r8, r8_ft) == 0);
}
