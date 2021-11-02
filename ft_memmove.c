/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-maul <mde-maul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:19:36 by mde-maul          #+#    #+#             */
/*   Updated: 2021/11/02 19:19:39 by mde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*src_str;
	unsigned char	*dst_str;
	unsigned char	*buf;

	i = 0;
	src_str = (unsigned char *)src;
	dst_str = dst;
	buf = (unsigned char *)malloc(len * sizeof(unsigned char));
	if (!buf)
		return (dst);
	while (i < len)
	{
		buf[i] = src_str[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		dst_str[i] = buf[i];
		i++;
	}
	free(buf);
	return (dst);
}
