#include "../libft.h"
#include <stdio.h>

void	del(void *ptr, size_t n)
{
	(void)n;
	free(ptr);
}

t_list    *funktion(t_list *list_el)
{
	char	*content;
	content = list_el->content;
	content[3] = '!';
	return list_el;
}

int main(void)
{
    t_list  *list;
    t_list  *new_el1;
    t_list  *new_el2;
    t_list  *new_el3;
    t_list  *new_list;

    new_el1 = ft_lstnew("heyyyy", 20);
    new_el2 = ft_lstnew("waaiitt", 30);
    new_el3 = ft_lstnew("i got a new complainttt", 45);
    list = new_el1;
    ft_list_push_back(list, new_el2);
    ft_list_push_back(list, new_el3);
    printf("This is the original list:\n");
    ft_display_list(list);
    new_list = ft_lstmap(list, &funktion);
    ft_lstdel(&list, &del);
    printf("\nThis is the new list:\n");
	ft_display_list(new_list);
}
