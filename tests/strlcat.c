//#include <string.h>
#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	src1[12] = "12345678912";
	char	dst1[20] = "5abcdefghi";
	size_t	rslt1;

	rslt1 = ft_strlcat(dst1, src1, 20);
	printf("this is s1 now: %s\n", dst1);
	printf("this is the returned value: %zu", rslt1);
}
