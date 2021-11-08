/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-maul <mde-maul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:31:51 by mde-maul          #+#    #+#             */
/*   Updated: 2021/10/30 15:31:55 by mde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	if (dstsize == 0)
		return (0);
	len = ft_strlen(dst);
	if (len > dstsize)
		len = dstsize;
	while (src[i] && i < (dstsize - len - 1))
	{
		dst[len + i] = src[i];
		i++;
	}
	if (len < dstsize)
		dst[len + i] = '\0';
	/*if (dstsize != 0 &&	ft_strlen(dst) < dstsize)
		dst[len + i] = '\0';
		*/
	return (len + ft_strlen(src));
	//return (len + ft_strlen(src));
}

/*
len + i + 1 < dstsize
i < dstsize - len - 1
*/