//#include <string.h>
#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char src1[20] = "the string to copy";
	char dst1[20] = "";
	printf("len of src string: %i, and of dst string: %i\n", ft_strlen(src1), ft_strlen(dst1));
	printf("this is the new string, supposedly: %s\n", ft_strcpy(dst1, src1));
	printf("len of src string: %i, and of dst string: %i\n", ft_strlen(src1), ft_strlen(dst1));
}
