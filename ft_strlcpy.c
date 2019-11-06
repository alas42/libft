/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avogt <avogt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 20:46:10 by avogt             #+#    #+#             */
/*   Updated: 2019/11/06 22:21:13 by avogt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lendst;
	size_t	lensrc;

	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	i = 0;
	while (i < dstsize - 1)
	{
		if (src[i] == '\0')
		{
			dst[i] = src[i];
			return (lensrc);
		}
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (lensrc);
}
