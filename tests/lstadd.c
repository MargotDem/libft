#include "../libft.h"

int main(void)
{
    t_list  *new_el1;
    t_list  *new_el2;
    t_list  *new_el3;

    new_el1 = ft_lstnew("hello thereee", 20);
    new_el2 = ft_lstnew("the angel from my nightmare", 30);
    new_el3 = ft_lstnew("the shadow in the background of the morgue", 45);
    ft_lstadd(&new_el3, new_el2);
    ft_lstadd(&new_el2, new_el1);
    ft_display_list(new_el1);
}
