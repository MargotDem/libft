#include "../libft.h"

void    display_list_el(t_list *list_el)
{
    ft_putstr(list_el->content);
    ft_putchar('\n');
}

int main(void)
{
    t_list  *new_el1;
    t_list  *new_el2;
    t_list  *new_el3;

    new_el1 = ft_lstnew("heyyyy", 20);
    new_el2 = ft_lstnew("waaiitt", 30);
    new_el3 = ft_lstnew("i got a new complainttt", 45);
    ft_lstadd(&new_el3, new_el2);
    ft_lstadd(&new_el2, new_el1);
    ft_lstiter(new_el1, &display_list_el);
}
