#include <string.h>
#include "../libft.h"
#include <stdio.h>
#include "tests.h"

int	main(void)
{
	char	s1_ft[12] = "12345678912";
	char	d1_ft[20] = "5abcdefghi";
	char	s1[12];
	char	d1[20];
	
	size_t	rslt1_ft;
	size_t	rslt1;
	size_t	dstsize = 20;

	ft_strcpy(s1, s1_ft);
	ft_strcpy(d1, d1_ft);
	char	*desc1 = ft_strjoin("src string: '", s1);
	print_test_descr(ft_strjoin(desc1, "', dest string: "), d1);
	rslt1_ft = ft_strlcat(d1_ft, s1_ft, dstsize);
	rslt1 = strlcat(d1, s1, dstsize);
	print_test_rslt_int(rslt1_ft, rslt1, rslt1_ft == rslt1);
}
