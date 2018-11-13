/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avogt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 12:49:20 by avogt             #+#    #+#             */
/*   Updated: 2018/11/13 15:53:55 by avogt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_lst;
	t_list	*ptr_list;

	new_lst = NULL;
	if (!(new_lst = (t_list *)malloc(sizeof(t_list))))
	{
		free(new_lst);
		return (NULL);
	}
	ptr_list = new_lst;
	while (lst)
	{
		new_lst->next = f(lst);
		lst = lst->next;
		new_lst = new_lst->next;
	}
	new_lst = ptr_list;
	return (new_lst);
}
