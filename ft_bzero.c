/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfcolon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 11:10:05 by alfcolon          #+#    #+#             */
/*   Updated: 2018/07/09 11:13:19 by alfcolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void		ft_bzero(void *s, size_t n)
{
	char	*p;

	p = s;
	while (n)
	{
		*p++ = 0;
		--n;
	}
}
