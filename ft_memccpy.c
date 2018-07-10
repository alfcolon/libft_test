/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfcolon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 12:40:22 by alfcolon          #+#    #+#             */
/*   Updated: 2018/07/10 14:11:40 by alfcolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*p1;
	char	*p2;
	int		i;

	i = (int)n;
	p1 = dst;
	p2 = (char *)src;
	while (i-- && (t_uchar)(*p1++ = *p2++) != (t_uchar)c)
		;
	if (i == -1)
		return (NULL);
	return (p1);
}
