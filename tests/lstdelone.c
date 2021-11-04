#include "../libft.h"
#include <stdio.h>

void	del(void *ptr, size_t n)
{
	free(ptr);
}

int	main(void)
{
	char	str[10] = "hello hey";
	t_list	*new;

	new = ft_lstnew((void *)str, 10);
	printf("here is the new list elements content: %s\n", new->content);
	printf("now lets delete it \n");
	ft_lstdelone(&new, &del);
	printf("this should segfault right: %s\n", new->content);
}
