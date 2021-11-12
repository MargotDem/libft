#include <stdio.h>
#include "../libft.h"
#include "tests.h"

void	print_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		printf("substring no %i: %s\n", i + 1, array[i]);
		i++;
	}
}

int	main(void)
{
	char	c = '*';

	char	*s1 = "hey*";
	char	**ar1;
	print_test_descr("string", s1);
	ar1 = ft_strsplit(s1, c);
	if (!ar1)
		return (0);
	printf("\n\n");
	print_array(ar1);

	printf("\n\n");

	char	*s2 = "*hey";
	char	**ar2;
	print_test_descr("string", s2);
	ar2 = ft_strsplit(s2, c);
	if (!ar2)
		return (0);
	printf("\n\n");
	print_array(ar2);

	printf("\n\n");

	char	*s3 = "*hey*";
	char	**ar3;
	print_test_descr("string", s3);
	ar3 = ft_strsplit(s3, c);
	if (!ar3)
		return (0);
	printf("\n\n");
	print_array(ar3);

	printf("\n\n");

	char	*s4 = "";
	char	**ar4;
	print_test_descr("string", s4);
	ar4 = ft_strsplit(s4, c);
	if (!ar4)
		return (0);
	printf("\n\n");
	print_array(ar4);

	printf("\n\n");

	char	*s5 = "*";
	char	**ar5;
	print_test_descr("string", s5);
	ar5 = ft_strsplit(s5, c);
	if (!ar5)
		return (0);
	printf("\n\n");
	print_array(ar5);

	printf("\n\n");

	char	*s6 = "*****";
	char	**ar6;
	print_test_descr("string", s6);
	ar6 = ft_strsplit(s6, c);
	if (!ar6)
		return (0);
	printf("\n\n");
	print_array(ar6);

	printf("\n\n");

	char	*s7 = "***hello*another string*and another one";
	char	**ar7;
	print_test_descr("string", s7);
	ar7 = ft_strsplit(s7, c);
	if (!ar7)
		return (0);
	printf("\n\n");
	print_array(ar7);

	printf("\n\n");
}
