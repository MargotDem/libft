/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-maul <mde-maul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:22:35 by mde-maul          #+#    #+#             */
/*   Updated: 2021/11/04 13:22:38 by mde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*next;
	t_list	*new_list_el;
	t_list	*new_list;

	new_list = ft_lstnew(lst->content, lst->content_size);
	lst = lst->next;
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
