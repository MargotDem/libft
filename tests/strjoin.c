#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char	s1[20] = "abc";
	char	s2[20] = "def";

	printf("result of ft_strjoin: %s\n", ft_strjoin(s1, s2));
}
