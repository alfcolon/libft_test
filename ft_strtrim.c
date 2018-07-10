/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfcolon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 21:42:26 by alfcolon          #+#    #+#             */
/*   Updated: 2018/07/10 11:29:10 by alfcolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char			*ft_strtrim(char const *s)
{
	size_t		len;
	size_t		start;
	char		*p;

	start = 0;
	while (s[start] == '\n' || s[start] == '\t' || s[start] == ' ')
		start++;
	if (!s[start])
		return (ft_memalloc(0));
	len = ft_strlen(s);
	while (s[len - 1] == '\t' || s[len - 1] == '\n' || s[len - 1] == ' ')
		len--;
	if (!(p = ft_strsub(s, (unsigned int)start, len - start)))
		return (NULL);
	p[len - start] = '\0';
	return (p);
}
