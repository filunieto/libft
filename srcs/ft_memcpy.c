/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 18:31:59 by fnieves           #+#    #+#             */
/*   Updated: 2022/01/31 02:17:41 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n) //esta es la mía sintetizando todo
{
	const unsigned char *PTSRC;
	unsigned char *ptdest;

	PTSRC = src;
	ptdest = dest;
	if (!dest || !src)
		return (0);
	while (n--)
		*ptdest++ = *PTSRC++;
	return (dest);
}
