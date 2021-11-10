#include "../libft.h"
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	*str;

	int		i;

	str = ft_strnew(3);
	i = 0;
	while (i < 3)
	{
		printf("str[%i] for now %i\n", i, str[i]);
		str[i] = 'A';
		i++;
	}
	write(1, "and now str is: \n", 17);
	write(1, str, ft_strlen(str));
}
