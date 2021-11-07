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
		printf("\n/!\\ FAIL /!\\\n\n\n");
}

void	print_test_rslt_int(int expected, int result, int diff)
{
	print_test_rslt_str(ft_itoa(expected), ft_itoa(result), diff);
}

void	print_test_rslt_char(char expected, char result, int diff)
{
	char	expected_str[2];
	char	result_str[2];

	expected_str[0] = expected;
	result_str[0] = result;
	expected_str[1] = '\0';
	result_str[1] = '\0';
	print_test_rslt_str(expected_str, result_str, diff);
}
