#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	//char	*string = "what the actual fuck****so it works with two or more substrings*but not one or zero";
	char	*string = "*hey*afewfwe";
	char	c = '*';
	char	**array;
	int		i;

	array = ft_strsplit(string, c);
	i = 0;
	while (array[i][0] != '\0')
	{
		printf("substring no %i: %s\n", i + 1, array[i]);
		i++;
	}
}
