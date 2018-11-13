/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avogt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 12:53:59 by avogt             #+#    #+#             */
/*   Updated: 2018/11/13 16:54:52 by avogt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strfill(char **tab, const char *s, char c)
{
	unsigned int	len;
	unsigned int	n_word;

	n_word = 0;
	while (*s != '\0')
	{
		len = 0;
		while (*s == c)
			++s;
		while (*s != c && *s != '\0')
		{
			tab[n_word][len++] = *s;
			++s;
		}
		tab[n_word][len] = '\0';
		n_word++;
	}
}

static int	ft_strmall(char **tab, const char *s, char c)
{
	unsigned int	len;
	unsigned int	n_word;

	n_word = 0;
	while (*s != '\0')
	{
		len = 0;
		while (*s == c)
			++s;
		while (*s != c && *s != '\0')
		{
			len++;
			++s;
		}
		if (!(tab[n_word] = (char *)malloc(sizeof(char) * len + 1)))
		{
			while (--n_word)
				free(tab[n_word]);
			free(tab[0]);
			return (-1);
		}
		n_word = (*s != '\0') ? n_word + 1 : n_word;
	}
	tab[n_word + 1] = 0;
	return (1);
}

char		**ft_strsplit(char const *s, char c)
{
	char			**tab;
	unsigned int	n_word;
	const char		*ptr;

	ptr = s;
	n_word = 0;
	if (s == NULL)
		return (NULL);
	while (*s != '\0')
	{
		while (*s == c)
			++s;
		while (*s != c && *s != '\0')
			++s;
		n_word = (*s != '\0') ? n_word + 1 : n_word;
	}
	if (!(tab = (char **)malloc(sizeof(char *) * (n_word + 1))))
		return (NULL);
	s = ptr;
	if (ft_strmall(tab, s, c) == -1)
		return (NULL);
	ft_strfill(tab, s, c);
	return (tab);
}
