/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-maul <mde-maul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:04:43 by mde-maul          #+#    #+#             */
/*   Updated: 2021/11/01 17:04:46 by mde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	unsigned int		i;
	unsigned int		len;
	char				*return_str;

	len = ft_strlen(s);
	return_str = (char *)malloc((len + 1) * sizeof(char));
	if (!return_str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		return_str[i] = f(i, s[i]);
		i++;
	}
	return_str[i] = '\0';
	return (return_str);
}
