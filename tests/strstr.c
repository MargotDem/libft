#include <string.h>
#include "../libft.h"
#include <stdio.h>
#include "tests.h"

int	main(void)
{
	char	h1[50] = "this is the haystack with the needle in it";
	char	n1[7] = "needle";
	char	*desc1 = ft_strjoin("haystack: '", h1);
	print_test_descr(ft_strjoin(desc1, "', needle: "), n1);
	char	*r1_ft = ft_strstr(h1, n1);
	char	*r1 = strstr(h1, n1);
	print_test_rslt_str(r1, r1_ft, ft_strcmp(r1, r1_ft) == 0);

	char	h2[50] = "haystack with a partial match: needull";
	char	n2[7] = "needle";
	char	*desc2 = ft_strjoin("haystack: '", h2);
	print_test_descr(ft_strjoin(desc2, "', needle: "), n2);
	char	*r2_ft = ft_strstr(h2, n2);
	char	*r2 = strstr(h2, n2);
	print_test_rslt_str(r2, r2_ft, !r2_ft);

	char	h3[50] = "haystack with a partial match: nee	";
	char	n3[7] = "needle";
	char	*desc3 = ft_strjoin("haystack: '", h3);
	print_test_descr(ft_strjoin(desc3, "', needle: "), n3);
	char	*r3_ft = ft_strstr(h3, n3);
	char	*r3 = strstr(h3, n3);
	print_test_rslt_str(r3, r3_ft, !r3_ft);

	char	h4[60] = "this is the haystack and the needle is empty string";
	char	n4[1] = "";
	char	*desc4 = ft_strjoin("haystack: '", h4);
	print_test_descr(ft_strjoin(desc4, "', needle: "), n4);
	char	*r4_ft = ft_strstr(h4, n4);
	char	*r4 = strstr(h4, n4);
	print_test_rslt_str(r4, r4_ft, ft_strcmp(r4, r4_ft) == 0);

	char	h5[1] = "";
	char	n5[7] = "needle";
	char	*desc5 = ft_strjoin("haystack: '", h5);
	print_test_descr(ft_strjoin(desc5, "', needle: "), n5);
	char	*r5_ft = ft_strstr(h5, n5);
	char	*r5 = strstr(h5, n5);
	print_test_rslt_str(r5, r5_ft, !r5_ft);

	char	h6[6] = "hello";
	char	n6[13] = "hello needle";
	char	*desc6 = ft_strjoin("haystack: '", h6);
	print_test_descr(ft_strjoin(desc6, "', needle: "), n6);
	char	*r6_ft = ft_strstr(h6, n6);
	char	*r6 = strstr(h6, n6);
	print_test_rslt_str(r6, r6_ft, !r6_ft);
}
