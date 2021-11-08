#include <string.h>
#include "../libft.h"
#include <stdio.h>
//#include <stdlib.h>
#include "tests.h"

int	main(void)
{
	/*
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
	*/

	// string 'abc'
	char	src1[4];
	char	dst1_ft[4];
	char	dst1[4];
	size_t		n1 = 3;
	src1[0] = 'a';
	src1[1] = 'b';
	src1[2] = 'c';
	src1[3] = '\0';
	dst1[3] = '\0';
	dst1_ft[3] = '\0';
	print_test_descr("src string", src1);
	ft_memmove(dst1_ft, src1, n1);
	memmove(dst1, src1, n1);
	print_test_rslt_str(dst1, dst1_ft, ft_strcmp(dst1, dst1_ft) == 0);

	// overlapping strings, behavior undefined
	char	src2[14];
	char	src2_ft[14];
	char	*dst2;
	char	*dst2_ft;
	size_t		n2 = 9;
	src2[0] = 'h';
	src2[1] = 'e';
	src2[2] = 'l';
	src2[3] = 'l';
	src2[4] = 'o';
	src2[5] = ' ';
	src2[6] = 'h';
	src2[7] = 'e';
	src2[8] = 'y';
	src2[9] = '\0';
	ft_strcpy(src2_ft, src2);
	dst2 = &src2[4];
	dst2_ft = &src2_ft[4];
	dst2[9] = '\0';
	dst2_ft[9] = '\0';
	print_test_descr("test with overlapping strings. dest = src[4]. src is", src2);
	ft_memmove(dst2_ft, src2_ft, n2);
	memmove(dst2, src2, n2);
	print_test_rslt_str(dst2, dst2_ft, ft_strcmp(dst2, dst2_ft) == 0);

}

