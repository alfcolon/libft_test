/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfcolon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 20:18:55 by alfcolon          #+#    #+#             */
/*   Updated: 2018/07/09 20:21:30 by alfcolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*p;

	if (!(p = ft_memalloc(size + 1)))
		return (NULL);
	p[size] = '\0';
	return (p);
}
