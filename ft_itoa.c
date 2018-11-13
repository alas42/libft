/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avogt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:22:12 by avogt             #+#    #+#             */
/*   Updated: 2018/11/12 18:27:04 by avogt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char		*ft_itoa(int n)
{
	char	*result;
	size_t	len;
	int		tmp;
	int		mini;

	result = NULL;
	len = (n < 0) ? 2 : 1;
	mini = (n < -2147483647) ? 1 : 0;
	tmp = n;
	while ((tmp /= 10) != 0)
		len++;
	if (!(result = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	result[0] = (n < 0) ? '-' : '+';
	result[1] = (mini) ? '2' : ' ';
	n = (n < -2147483647) ? 147483648 : n;
	n = (n < 0) ? n * -1 : n;
	result[len] = '\0';
	while (len--)
	{
		result[len] = (result[len] != '-' && result[len] != '2') ? (n % 10)
			+ '0' : result[len];
		n /= 10;
	}
	return (result);
}
