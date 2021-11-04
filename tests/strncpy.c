//#include <string.h>
#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char src1[20] = "the str";
	char dst1[20] = "";
	int	n;

	n = 10;
	printf("len of src string: %i, and of dst string: %i\n", ft_strlen(src1), ft_strlen(dst1));
	printf("this is the new string, supposedly: %s\n", ft_strncpy(dst1, src1, n));
	printf("len of src string: %i, and of dst string: %i\n", ft_strlen(src1), ft_strlen(dst1));
}
