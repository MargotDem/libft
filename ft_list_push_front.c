/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-maul <mde-maul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:18:38 by mde-maul          #+#    #+#             */
/*   Updated: 2021/11/25 14:18:40 by mde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_push_front(t_list **list, t_list *new)
{
	if (!list || !(*list) || !new)
		return ;
	new->next = *list;
	*list = new;
}
