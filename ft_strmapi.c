/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfcolon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 17:32:56 by alfcolon          #+#    #+#             */
/*   Updated: 2018/07/10 14:13:59 by alfcolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	t_uint	i;
	char	*p;

	len = ft_strlen(s);
	if (!(p = ft_memalloc(len + 1)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		p[i] = (*f)(i, (char)*s++);
		i++;
	}
	p[len] = '\0';
	return (p);
}
