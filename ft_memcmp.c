/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfcolon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 14:37:20 by alfcolon          #+#    #+#             */
/*   Updated: 2018/07/10 11:24:21 by alfcolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*p1;
	char	*p2;
	int		diff;

	p1 = (char *)s1;
	p2 = (char *)s2;
	while (n-- && ((diff = UCHAR(*p1) - UCHAR(*p2)) == 0))
	{
		++p1;
		++p2;
	}
	return (diff);
}
