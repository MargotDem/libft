#include "libft.h"

void    display_list_el(t_list *list_el)
{
    ft_putstr(list_el->content);
    ft_putchar('\n');
}

void    ft_display_list(t_list *list)
{
    ft_lstiter(list, &display_list_el);
}
