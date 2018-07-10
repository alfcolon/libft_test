/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfcolon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 19:27:17 by alfcolon          #+#    #+#             */
/*   Updated: 2018/07/09 19:57:10 by alfcolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (s1[i])
		i++;
	len = ft_strlen((const char *)s2);
	while (*s2 && n--)
	{
		s1[i] = *s2++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
