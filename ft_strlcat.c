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
	int		len;

	i = 0;
	len = ft_strlen(dst);
	while (src[i] && i < (dstsize - len - 1))
	{
		dst[len + i] = src[i];
		i++;
	}
	dst[len + i] = '\0';
	return (i);
}
