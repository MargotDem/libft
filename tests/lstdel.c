#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

void	del(void *ptr, size_t n)
{
	(void)n;
	free(ptr);
}

int main(void)
{
    t_list  *new_el1;
    t_list  *new_el2;
    t_list  *new_el3;

    new_el1 = ft_lstnew("el 1", 10);
    new_el2 = ft_lstnew("el 2", 10);
    new_el3 = ft_lstnew("el 3", 10);
    ft_lstadd(&new_el3, new_el2);
    ft_lstadd(&new_el2, new_el1);
	printf("This is the list before deleting it:\n");
    ft_display_list_str(new_el1);
	ft_lstdel(&new_el1, &del);
	printf("This is the list after deleting it:\n");
	ft_display_list_str(new_el1);
}
