/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avogt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:58:47 by avogt             #+#    #+#             */
/*   Updated: 2019/12/03 09:33:32 by avogt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstnew(void *content)
{
	t_list *new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content != NULL)
	{
		if (!(new->content = (void *)malloc(sizeof(content))))
		{
			free(new);
			return (NULL);
		}
		ft_memcpy(new->content, content, sizeof(content));
	}
	else
		new->content = NULL;
	new->next = NULL;
	return (new);
}
