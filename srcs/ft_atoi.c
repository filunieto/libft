/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 01:40:11 by fnieves           #+#    #+#             */
/*   Updated: 2022/01/28 14:25:55 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_pow(int base, int exp)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	while (i < exp)
	{
		res = base * res;
		i++;
	}
	return (res);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int	leng_nprt;

	i = 0;
	res = 0;
	leng_nprt = ft_strlen((char *)nptr);
	if ('+' == nptr[i] || '-' == nptr[i])
		i++;
	while (nptr[i])
	{
		if ('0' <= nptr[i] && '9' >= nptr[i])
		{
			res = res + ((nptr[i] - '0') * ft_pow(10, (leng_nprt - 1 - i)));
		}
		else
		{
			if (nptr[0] == '-')
				return (-(res / ft_pow(10, (leng_nprt - i))));
			return (res / ft_pow(10, (leng_nprt - i)));
		}
		i++;
	}
	if (nptr[0] == '-')
		return (-res);
	return (res);
}
