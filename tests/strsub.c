#include <stdio.h>
#include "../libft.h"
#include "tests.h"

int	main(void)
{
	char	s1[4] = "abc";
	unsigned int	start = 1;
	size_t		len = 2;
	char	*d1 = ft_strjoin("the string: '", s1);
	print_test_descr(ft_strjoin(d1, "', start: "), ft_itoa(start));
	print_test_descr_plus("len: ", ft_itoa(len));
	char	*expected = "bc";
	char	* result = ft_strsub(s1, start, len);
	print_test_rslt_str(result, expected, !ft_strcmp(result, expected));
}
