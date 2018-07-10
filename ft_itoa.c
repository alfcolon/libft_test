/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfcolon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 11:25:31 by alfcolon          #+#    #+#             */
/*   Updated: 2018/07/10 14:13:03 by alfcolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbrlen(int n)
{
	size_t		len;
	int			neg;

	neg = 0;
	len = 0;
	if (!n)
		return (1);
	if (n < 0)
		neg = 1;
	while (n)
	{
		++len;
		n /= 10;
	}
	return (len + neg);
}

char			*ft_itoa(int n)
{
	size_t		len;
	char		*temp;
	t_uint		num;

	len = ft_nbrlen(n);
	if (!(temp = ft_memalloc(len + 1)))
		return (NULL);
	if (!n)
		temp[0] = '0';
	else
	{
		if (n < 0)
			temp[0] = '-';
		num = ABS(n);
		while (num)
		{
			temp[--len] = num % 10 + '0';
			num /= 10;
		}
	}
	return (temp);
}
