/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avogt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:00:13 by avogt             #+#    #+#             */
/*   Updated: 2019/12/03 09:32:25 by avogt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *))
{
	t_list *tosup;

	tosup = *alst;
	del(tosup->content);
	free(tosup);
	*alst = NULL;
}
