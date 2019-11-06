/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avogt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 20:36:11 by avogt             #+#    #+#             */
/*   Updated: 2019/11/06 20:41:14 by avogt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	void	*tab;

	if (nmemb < 1 || size < 1)
		return (NULL);
	if (tab = (void *)malloc(sizeof(size) * nmemb))
		return (NULL);
	return (tab);
}
