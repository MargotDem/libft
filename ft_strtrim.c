/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-maul <mde-maul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:46:00 by mde-maul          #+#    #+#             */
/*   Updated: 2021/11/02 10:46:04 by mde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int	get_whitespace_start(const char *s)
{
	int	whitespaces;

	whitespaces = 0;
	while (is_whitespace(s[whitespaces]))
	{
		whitespaces++;
	}
	return (whitespaces);
}

int	get_whitespace_end(const char *s, int len)
{
	int	whitespaces;

	whitespaces = 0;
	while (is_whitespace(s[len - 1 - whitespaces]))
	{
		whitespaces++;
	}
	return (whitespaces);
}

char	*ft_strtrim(char const *s)
{
	int		whitespace_start;
	int		whitespace_end;
	int		len;
	int		i;
	char	*str;

	len = ft_strlen(s);
	whitespace_start = get_whitespace_start(s);
	whitespace_end = get_whitespace_end(s, len);
	str = (char *)malloc((len + 1 - whitespace_start - whitespace_end) \
		* sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < (len - whitespace_end - whitespace_start))
	{
		str[i] = s[whitespace_start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
