/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfcolon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 10:46:14 by alfcolon          #+#    #+#             */
/*   Updated: 2018/07/10 14:11:09 by alfcolon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

int			ft_atoi(const char *str)
{
	t_uint	result;
	t_uint	neg;

	result = 0;
	neg = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (result > INT_MAX)
			return (ATOI_OVERFLOW(neg));
		result = result * 10 + *str - '0';
		str++;
	}
	if (neg)
		return (-result);
	return (result);
}
