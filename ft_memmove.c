/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfcolon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 15:25:47 by alfcolon          #+#    #+#             */
/*   Updated: 2018/07/09 15:29:34 by alfcolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*p1;
	char	*p2;

	p1 = dst;
	p2 = (char *)src;
	if (p2 >= p1)
		while (len--)
			*p1++ = *p2++;
	else
		while (len--)
			p1[len] = p2[len];
	return (dst);
}
