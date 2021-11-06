/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-maul <mde-maul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:34:22 by mde-maul          #+#    #+#             */
/*   Updated: 2021/10/29 17:34:25 by mde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_whitespace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' \
		|| c == '\v' || c == '\r' || c == '\f')
		return (1);
	return (0);
}

int	trim_whitespace(const char *str)
{
	int	i;

	i = 0;
	while (is_whitespace(str[i]))
	{
		i++;
	}
	return (i);
}

int	is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	i = trim_whitespace(str);
	if (str[i] == '-' || str[i] == '+')
	{
		sign = 1 - (str[i] == '-') * 2;
		i++;
	}
	while (str[i] && is_num(str[i]))
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (sign * result);
}
