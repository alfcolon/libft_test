/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfcolon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 17:27:09 by alfcolon          #+#    #+#             */
/*   Updated: 2018/07/10 14:13:45 by alfcolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	t_uint	i;
	size_t	len;
	char	*p;

	len = ft_strlen(s);
	if (!(p = ft_memalloc(len + 1)))
		return (NULL);
	i = 0;
	while (*s)
	{
		p[i] = (*f)((char)*s++);
		i++;
	}
	return (p);
}
