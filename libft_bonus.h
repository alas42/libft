/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avogt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 08:59:22 by avogt             #+#    #+#             */
/*   Updated: 2019/12/03 09:10:32 by avogt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_BONUS_H
# define LIBFT_BONUS_H
# include "libft.h"

t_list				*ft_lstnew(void *content);
void				ft_lstdelone(t_list **alst, void (*del)(void *));
void				ft_lstclear(t_list **alst, void (*del)(void *));
void				ft_lstadd_front(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void(*f)(void *));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(void *),
		void (*del)(void *));
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **alst, t_list *new);
#endif
