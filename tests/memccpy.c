//#include <string.h>
#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;

	str1 = (char *)malloc(6 * sizeof(char));
	str2 = (char *)malloc(6 * sizeof(char));

	str1[0] = 'a';
	str1[1] = 'b';
	str1[2] = 'c';
	str1[3] = 'd';
	str1[4] = 'e';
	str1[5] = '\0';

	printf("this is str1: %s, and str2: %s\n", str1, str2);
	str3 = (char *)ft_memccpy((void *)str2, (void *)str1, 'c', 5);
	printf("this is str2 after ft_memcpy %s\n", str2);
	printf("this is str3 after ft_memcpy %s\n", str3);

	/*
	int a = 45;
	int b;
	int	*ptr_b;
	int	*ptr_a;
	ptr_b = &b;
	ptr_a = &a;
	printf("this is int a: %i, and int b: %i\n", *ptr_a, *ptr_b);
	ptr_b = (int *)ft_memccpy((void *)ptr_b, (void *)ptr_a, 4);
	printf("this is b after ft_memcpy %i\n", *ptr_b);

	*/
}
