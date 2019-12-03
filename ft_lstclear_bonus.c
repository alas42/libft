/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avogt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 20:30:25 by avogt             #+#    #+#             */
/*   Updated: 2019/12/03 09:32:14 by avogt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstclear(t_list **alst, void (*del)(void *))
{
	t_list *ptr;

	ptr = NULL;
	while (*alst)
	{
		del((*alst)->content);
		ptr = *alst;
		*alst = (*alst)->next;
		free(ptr);
	}
	*alst = NULL;
}
