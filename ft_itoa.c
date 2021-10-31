/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-maul <mde-maul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 21:28:15 by mde-maul          #+#    #+#             */
/*   Updated: 2021/10/31 21:28:17 by mde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	get_size(int n, int negative)
{
	int		size;

	size = 0;
	while (n)
	{
		size++;
		n = n / 10;
	}
	if (negative)
		size++;
	return (size);
}

void	make_string(char *str, int size, int n)
{
	int		i;

	i = 0;
	while (i < size)
	{
		str[size - i - 1] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	str[size] = '\0';
}

char	*ft_itoa(int n)
{
	int		negative;
	int		size;
	char	*str;

	if (n < 0)
	{
		negative = 1;
		n = -n;
	}
	else
		negative = 0;
	size = get_size(n, negative);
	str = (char *)malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	make_string(str, size, n);
	if (negative)
		str[0] = '-';
	return (str);
}
