#include "../libft.h"

int main(void)
{
    t_list  *new_el1;
    t_list  *new_el2;
    t_list  *new_el3;
    t_list  *list;

    new_el1 = ft_lstnew("1", 2);
    new_el2 = ft_lstnew("2", 2);
    new_el3 = ft_lstnew("3", 2);
    ft_lstadd(&new_el3, new_el2);
    ft_lstadd(&new_el2, new_el1);
	list = new_el1;
	ft_list_push_front(&list, ft_lstnew("0", 2));
	ft_list_push_back(list, ft_lstnew("4", 2));
    ft_display_list(list);
}
