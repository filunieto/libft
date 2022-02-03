/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 18:31:59 by fnieves           #+#    #+#             */
/*   Updated: 2022/02/02 21:10:35 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*ptsrc;
	unsigned char		*ptdest;

	ptsrc = src;
	ptdest = dest;
	if (!dest || !src)
		return (0);
	while (n--)
		*ptdest++ = *ptsrc++;
	return (dest);
}
