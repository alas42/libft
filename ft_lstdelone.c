/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avogt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:00:13 by avogt             #+#    #+#             */
/*   Updated: 2018/11/13 13:56:45 by avogt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tosup;

	while (*alst)
	{
		tosup = *alst;
		*alst = (*alst)->next;
		del(tosup->content, tosup->content_size);
		free(tosup);
		tosup = NULL;
	}
}
