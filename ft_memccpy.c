/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-maul <mde-maul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:58:50 by mde-maul          #+#    #+#             */
/*   Updated: 2021/11/02 18:58:59 by mde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*src_str;
	unsigned char	*dst_str;

	i = 0;
	src_str = (unsigned char *)src;
	dst_str = dst;
	while (i < n)
	{
		if (src_str[i] == c)
			return (&src_str[i + 1]);
		dst_str[i] = src_str[i];
		i++;
	}
	return (NULL);
}