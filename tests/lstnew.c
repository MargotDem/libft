#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	str[10] = "hello hey";
	t_list	*new;

	new = ft_lstnew((void *)str, 10);
	printf("here is the new list element's content: %s\n", new->content);
}
