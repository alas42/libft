/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avogt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:41:34 by avogt             #+#    #+#             */
/*   Updated: 2018/11/10 15:31:03 by avogt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendest;
	size_t	lensrc;
	size_t	i;

	lensrc = ft_strlen(src);
	lendest = ft_strlen(dst);
	i = 0;
	if (size < lendest)
		return (size + lensrc);
	while (i < size - lendest - 1)
	{
		if (src[i] == '\0')
		{
			dst[lendest + i] = src[i];
			return (lendest + lensrc);
		}
		dst[lendest + i] = src[i];
		i++;
	}
	dst[lendest + i] = '\0';
	return (lendest + lensrc);
}
