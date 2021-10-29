#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		len;
	int		i;

	len = ft_strlen(src);
	cpy = (char *)malloc(len + 1);
	if (!cpy)
		return (0);
	i = 0;
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
