/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:17:40 by fnieves           #+#    #+#             */
/*   Updated: 2022/02/05 15:08:00 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_cipher(int n)
{
	size_t	cipher;

	cipher = 0;
	if (!n)
		return (1);
	if (n < 0)
		n = -n;
	while (n)
	{
		n = n / 10;
		cipher++;
	}
	return (cipher);
}

int	power(int base, int exp)
{
	int	res;

	res = 1;
	while (exp > 0)
	{
		res = base * res;
		exp--;
	}
	return (res);
}

char	*str_numb(int n, char *number, int cipher)
{
	int	i;

	i = 0;
	while (n)
	{
		number[i] = n / power(10, cipher - i - 1) + '0';
		n = n - n / power(10, cipher - i - 1) * power(10, cipher - i - 1);
		i++;
	}
	number[i] = '\0';
	return (number);
}

char	*ft_itoa(int n)
{
	char	*number;
	int		sign;
	size_t	cipher;

	cipher = count_cipher(n);
	sign = 0;
	number = (char *)malloc(sizeof(char) * cipher + 1 + 1);
	if (!n)
		return ("0");
	if (n < 0)
	{
		n = -n;
		*number = '-';
		number++;
		sign = 1;
	}
	number = str_numb(n, number, cipher);
	return (number - sign);
}
