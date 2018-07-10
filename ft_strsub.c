/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfcolon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 21:26:29 by alfcolon          #+#    #+#             */
/*   Updated: 2018/07/10 14:14:23 by alfcolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*p;
	t_uint	i;
	t_uint	end;

	if (!(p = ft_memalloc(len + 1)))
		return (NULL);
	end = start + len;
	i = 0;
	while (start < end)
	{
		p[i] = s[start];
		i++;
		start++;
	}
	p[len] = '\0';
	return (p);
}
