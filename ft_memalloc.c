/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfcolon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 12:35:17 by alfcolon          #+#    #+#             */
/*   Updated: 2018/07/10 16:19:01 by alfcolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

void		*ft_memalloc(size_t size)
{
	char	*p;

	if (!(p = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	ft_bzero(p, size);
	//p[size] = '\0';
	return ((void *)p);
}
