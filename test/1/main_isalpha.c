/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:06:33 by fnieves           #+#    #+#             */
/*   Updated: 2022/01/24 16:39:01 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../includes/libft.h"
#include <stdio.h>

int	ft_isalpha(int c)
{
	return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
}

int	int_isalpha(int c)
{
	return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
}

int	main(void)
{
	char c = 'a';
	int d = 8;

	printf("la salida del carcater %c eintegro %i, es %i\n", c, c, ft_isalpha(c));
	printf("la salida del carcater %c,eintegro %i es %i\n", d, d, ft_isalpha(d));
	return (0);
}