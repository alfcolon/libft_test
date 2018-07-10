/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfcolon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 21:05:30 by alfcolon          #+#    #+#             */
/*   Updated: 2018/07/10 10:43:15 by alfcolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wrdlen(const char *s, char delim)
{
	size_t		len;

	len = 0;
	while (*s && (*s++ != delim))
		len++;
	return (len);
}

static size_t	ft_wrdlens(const char *s, char delim)
{
	size_t		len;

	len = 0;
	while (*s)
		if (*s++ != delim)
			len++;
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t		wrdlen;
	int			wrd;
	char		**tab;

	if (!(tab = ft_memalloc(sizeof(*tab) * ft_wrdlens(s, c))))
		return (NULL);
	wrd = 0;
	while (*s)
	{
		if (*s != c)
		{
			wrdlen = ft_wrdlen(s, c);
			if (!(tab[wrd] = ft_memalloc(wrdlen)))
				return (tab);
			tab[wrd] = ft_strncpy(tab[wrd], s, wrdlen);
			tab[wrd][wrdlen] = '\0';
			wrd++;
			s += wrdlen;
		}
		else
			s++;
	}
	tab[wrd] = 0;
	return (tab);
}
