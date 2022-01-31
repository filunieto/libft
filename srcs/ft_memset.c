/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:04:27 by fnieves           #+#    #+#             */
/*   Updated: 2022/01/29 02:08:49 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//por què elegimos unsigned char y no otro (int, normal char...)
//aseguramos que el tipo se correcto en esta  atribución
void	*ft_memset(void *s, int c, size_t n)
{
	int				i;
	unsigned char	*point;

	i = 0;
	point = (unsigned char *)s;
	while (i < n)
	{
		point[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
