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
	t_list	*new_list_el;
	t_list	*new_list;
	t_list	*new_list_start;

	new_list = f(ft_lstnew(lst->content, lst->content_size));
	new_list_start = new_list;
	lst = lst->next;
	while (lst)
	{
		new_list_el = f(ft_lstnew(lst->content, lst->content_size));
		new_list->next = new_list_el;
		new_list = new_list_el;
		lst = lst->next;
	}
	return (new_list_start);
}
