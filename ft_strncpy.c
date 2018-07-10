/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfcolon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 20:04:34 by alfcolon          #+#    #+#             */
/*   Updated: 2018/07/10 10:36:06 by alfcolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*p;

	p = dst;
	while (len--)
	{
		if ((*p = *src) != 0)
			++src;
		++p;
	}
	return (dst);
}
