/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avogt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:52:43 by avogt             #+#    #+#             */
/*   Updated: 2018/11/13 17:03:39 by avogt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst2;
	const unsigned char	*src2;
	size_t				counter;

	counter = 0;
	dst2 = dst;
	src2 = src;
	while (counter < len)
	{
		dst2[counter] = src2[counter];
		counter++;
	}
	return (dst);
}
