#include <stdio.h>
#include "../libft.h"

void	print_test_descr(char *description, char *str)
{
	printf("	TEST: %s: '%s'", description, str);
}

void	print_test_rslt_str(char *expected, char *result, int diff)
{
	printf("\n\n	  %s", expected);
	printf("	expected\n");
	printf("	  %s", result);
	printf("	result\n");
	if (diff)
		printf("OK\n\n\n");
	else
		printf("/!\\ FAIL /!\\\n\n\n");
}

void	print_test_rslt_int(int expected, int result, int diff)
{
	print_test_rslt_str(ft_itoa(expected), ft_itoa(result), diff);
}
