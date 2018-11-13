/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avogt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:47:35 by avogt             #+#    #+#             */
/*   Updated: 2018/11/12 18:46:39 by avogt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char	to_find;
	int		counter;
	char	*ptr;

	to_find = (char)c;
	counter = 0;
	ptr = (char*)s;
	while (s[counter] != '\0')
	{
		if (s[counter] == c)
			return (ptr);
		counter++;
		ptr++;
	}
	if (s[counter] == c)
		return (ptr);
	return (NULL);
}
