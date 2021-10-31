/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-maul <mde-maul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 14:03:32 by mde-maul          #+#    #+#             */
/*   Updated: 2021/10/31 14:03:35 by mde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_match(const char *haystack, const char *needle, int i)
{
	int	j;

	j = 0;
	if (ft_strlen(needle) > ft_strlen(&haystack[i]))
		return (0);
	while (needle[j])
	{
		if (haystack[i + j] != needle[j])
			return (0);
		j++;
	}
	return (1);
}

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;

	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
			if (is_match(haystack, needle, i))
				return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
