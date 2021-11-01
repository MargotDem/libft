/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-maul <mde-maul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:00:30 by mde-maul          #+#    #+#             */
/*   Updated: 2021/11/01 17:00:34 by mde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//instructions dont specify what to do with malloc is unsuccessful

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		len;
	char	*return_str;

	len = ft_strlen(s);
	return_str = (char *)malloc((len + 1) * sizeof(char));
	if (!return_str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		return_str[i] = f(s[i]);
		i++;
	}
	return_str[i] = '\0';
	return (return_str);
}
