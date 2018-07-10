/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfcolon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 17:14:46 by alfcolon          #+#    #+#             */
/*   Updated: 2018/07/10 10:35:23 by alfcolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	len;
	size_t	appendlen;
	char	*p;

	srclen = ft_strlen(src);
	dstlen = ft_strlen((const char *)dst);
	len = srclen + dstlen;
	if (dstsize > dstlen)
	{
		p = (char *)src;
		appendlen = dstsize - dstlen;
		dst += dstlen;
		while (--appendlen && *p)
			*dst++ = *p++;
		*dst = '\0';
		return (srclen + dstlen);
	}
	return (srclen + dstsize);
}
