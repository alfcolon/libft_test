/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfcolon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 16:54:40 by alfcolon          #+#    #+#             */
/*   Updated: 2018/07/10 15:47:32 by alfcolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char		*ft_strdup(const char *s1)
{
	size_t	len;
	char	*p;

	len = ft_strlen((char *)s1);
	if (!(p = ft_memalloc(len + 1)))
		return (NULL);
	ft_memcpy((void *)p, (void *)s1, len);
	p[len] = '\0';
	p[len + 1] = '\0';
	return (p);
}
