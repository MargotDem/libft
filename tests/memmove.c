//#include <string.h>
#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*str1;
	char	*str2;
	//char	*str3;
	char	*str4;

	str1 = (char *)malloc(15 * sizeof(char));
	str2 = (char *)malloc(6 * sizeof(char));

	str1[0] = 'a';
	str1[1] = 'b';
	str1[2] = 'c';
	str1[3] = 'd';
	str1[4] = 'e';
	str1[5] = '\0';

	str4 = &str1[2];

	printf("this is str1: %s, and str2: %s\n", str1, str2);
	str2 = (char *)ft_memmove((void *)str4, (void *)str1, 6);
	//str2 = (char *)memmove((void *)str4, (void *)str1, 5);
	printf("this is str2 after ft_memmove %s\n", str2);

	int a = 45;
	int b;
	int	*ptr_b;
	int	*ptr_a;
	ptr_b = &b;
	ptr_a = &a;
	printf("this is int a: %i, and int b: %i\n", *ptr_a, *ptr_b);
	ptr_b = (int *)ft_memcpy((void *)ptr_b, (void *)ptr_a, 4);
	printf("this is b after ft_memmove %i\n", *ptr_b);
}

