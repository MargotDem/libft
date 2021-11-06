#include "../libft.h"
#include <stdio.h>
//#include <stdlib.h>

int	main(void)
{
	char	str1[10] = " -900(8s";
	printf("ft_atoi of %s: %i\n", str1, ft_atoi(str1));
}

/*

123
-123
   -677
   - 7964
+638
  +4634
  + 463
56hh
  46747kfg


*/