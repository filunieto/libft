/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:04:27 by fnieves           #+#    #+#             */
/*   Updated: 2022/02/09 01:31:20 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//por què elegimos unsigned char y no otro (int, normal char...)
//aseguramos que el tipo se correcto en esta  atribución
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pts;

	pts = (unsigned char *)s;
	while (n--)
	{
		*pts++ = (char)c;
	}
	return ((unsigned char *)s);
}
