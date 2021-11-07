#include <string.h>
#include "../libft.h"
#include <stdio.h>
#include "tests.h"

int	main(void)
{
	char	s1[6] = "1b345";
	char	*c1 = "b";
	char	*desc1 = ft_strjoin("string: ", s1);
	print_test_descr(ft_strjoin(desc1, ", char: "), c1);
	print_test_rslt_str(strchr(s1, *c1), ft_strchr(s1, *c1), strchr(s1, *c1) == ft_strchr(s1, *c1));
	
	char	s2[5] = "ab8d";
	char	*c2 = "8";
	char	*desc2 = ft_strjoin("string: ", s2);
	print_test_descr(ft_strjoin(desc2, ", char: "), c2);
	print_test_rslt_str(strchr(s2, *c2), ft_strchr(s2, *c2), strchr(s2, *c2) == ft_strchr(s2, *c2));

	char	s3[4] = "abc";
	char	*c3 = "\0";
	char	*desc3 = ft_strjoin("string: ", s3);
	print_test_descr(ft_strjoin(desc3, ", char: "), "\\0");
	print_test_rslt_str(strchr(s3, *c3), ft_strchr(s3, *c3), strchr(s3, *c3) == ft_strchr(s3, *c3));

	char	s4[4] = "abc";
	char	*c4 = "d";
	char	*desc4 = ft_strjoin("string: ", s4);
	print_test_descr(ft_strjoin(desc4, ", char: "), c4);
	print_test_rslt_str(strchr(s4, *c4), ft_strchr(s4, *c4), strchr(s4, *c4) == ft_strchr(s4, *c4));

	char	s5[7] = "abcdef";
	char	*c5 = "d";
	char	*desc5 = ft_strjoin("string: ", s5);
	print_test_descr(ft_strjoin(desc5, ", char: "), c5);
	print_test_rslt_str(strchr(s5, *c5), ft_strchr(s5, *c5), strchr(s5, *c5) == ft_strchr(s5, *c5));

	char	*s6;
	s6 = NULL;
	char	*c6 = "d";
	print_test_descr("null string, char", c6);
	print_test_rslt_str("does not segfault", ft_strchr(s6, *c6), 1);

	char	s7[7] = "";
	char	*c7 = "d";
	print_test_descr("(empty string), char: ", c7);
	print_test_rslt_str(strchr(s7, *c7), ft_strchr(s7, *c7), strchr(s7, *c7) == ft_strchr(s7, *c7));
}

/*
found this on stack overflow this is n e a t:
char *strchr(const char *s, int c){
    while (*s != (char)c)
        if (!*s++)
            return 0;
    return (char *)s;
}
*/