/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-maul <mde-maul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:32:08 by mde-maul          #+#    #+#             */
/*   Updated: 2021/11/03 13:32:14 by mde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*ptr;

	if (!alst || !(*alst) || !del)
		return ;
	ptr = *alst;
	del(ptr->content, ptr->content_size);
	free(*alst);
	*alst = NULL;
}
