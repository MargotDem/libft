/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-maul <mde-maul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:57:57 by mde-maul          #+#    #+#             */
/*   Updated: 2021/11/03 13:58:00 by mde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;
	t_list	*next;

	if (!alst || !(*alst) || !del)
		return ;
	list = *alst;
	while (list)
	{
		del(list->content, list->content_size);
		next = list->next;
		free(list);
		list = next;
	}
	*alst = NULL;
}
