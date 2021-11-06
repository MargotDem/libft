#include <stdio.h>

void	print_test_descr(char *str)
{
	printf("	TEST: %s: ", str);
}

void	print_test_rslt_int(int expected, int result, int diff)
{
	printf("\n\n	  %i", expected);
	printf("	expected\n");
	printf("	  %i", result);
	printf("	result\n\n");
	if (diff)
		printf("OK\n\n");
	else
		printf("FAIL\n\n");
}

void	print_test_rslt_str(char *expected, char *result, int diff)
{
	printf("\n\n	  %s", expected);
	printf("	expected\n");
	printf("	  %s", result);
	printf("	result\n\n");
	if (diff)
		printf("OK\n\n");
	else
		printf("FAIL\n\n");
}
