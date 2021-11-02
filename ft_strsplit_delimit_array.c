/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_delimit_array.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-maul <mde-maul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:40:20 by mde-maul          #+#    #+#             */
/*   Updated: 2021/11/02 14:40:23 by mde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strsplit_delimit_array(char **array, int substr_nb)
{
	char	*array_delimiter;

	array_delimiter = (char *)malloc(sizeof(char));
	if (!array_delimiter)
		return (0);
	*array_delimiter = '\0';
	array[substr_nb] = array_delimiter;
	return (1);
}
