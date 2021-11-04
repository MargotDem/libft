#include "libft.h"

void    display_list_el(t_list *list_el)
{
    ft_putstr(list_el->content);
    ft_putchar('\n');
}

void    ft_display_list(t_list *list)
{
    t_list  *next;

    while (list)
    {
        next = list->next;
        display_list_el(list);
        list = next;
    }
}
