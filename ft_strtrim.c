/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avogt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 12:23:42 by avogt             #+#    #+#             */
/*   Updated: 2019/11/06 22:11:36 by avogt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_lenni(char const *s, unsigned int *i, size_t *len,
		char const *set)
{
	int j;

	j = 0;
	while (set[j] != '\0')
	{
		if (s[*i] == set[j])
		{
			(*i)++;
			j = -1;
		}
		j++;
	}
	j = 0;
	while (set[j] != '\0')
	{
		if (s[*len - 1] == set[j])
		{
			(*len)--;
			j = -1;
		}
		j++;
	}
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char			*fresh;
	size_t			len;
	unsigned int	i;
	unsigned int	counter;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s1);
	i = 0;
	counter = 0;
	ft_lenni(s1, &i, &len, set);
	if (i > len)
	{
		if (!(fresh = (char *)malloc(sizeof(char) * (1))))
			return (NULL);
	}
	else
	{
		if (!(fresh = (char *)malloc(sizeof(char) * (len - i + 1))))
			return (NULL);
	}
	while (i < len)
		fresh[counter++] = s1[i++];
	fresh[counter] = '\0';
	return (fresh);
}
