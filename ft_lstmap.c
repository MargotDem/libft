#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
    t_list  *next;
    t_list  *new_list_el;
    t_list  *new_list;

    //initialize
    new_list = ft_lstnew(lst->content, lst->content_size);
    lst = lst->next;
    // nw list = lstnew(lst->content, lst->content_size)
    while (lst)
    {
        next = lst->next;
        new_list_el = f(ft_lstnew(lst->content, lst->content_size));
        ft_lstadd_end(new_list, new_list_el);
        //wow im really dumb. wtf am i doing. you can just:
        //prev = new_list_el; before you reassign it
        // prev->next = new_list_el;
        lst = next;
    }
}
