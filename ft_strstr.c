/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfcolon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 21:19:49 by alfcolon          #+#    #+#             */
/*   Updated: 2018/07/09 21:25:28 by alfcolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strstr(const char *haystack, const char *needle)
{
	size_t		len;
	size_t		i;
	size_t		j;
	size_t		k;

	len = ft_strlen(needle);
	if (!len)
		return ((char *)haystack);
	i = 0;
	while (haystack[i])
	{
		j = i;
		k = 0;
		while (k < len && haystack[j++] == needle[k++])
			if (k == len)
				return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
