/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfcolon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 20:22:40 by alfcolon          #+#    #+#             */
/*   Updated: 2018/07/10 10:56:22 by alfcolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;
	size_t	i;
	size_t	j;
	size_t	k;

	(void)len;
	nlen = ft_strlen(needle);
	if (!nlen)
		return ((char *)haystack);
	i = 0;
	while (i < len)
	{
		j = i;
		k = 0;
		while (k < nlen && j < len && haystack[j++] == needle[k++])
			if (k == nlen)
				return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
