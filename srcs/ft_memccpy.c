/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 14:32:48 by fnieves           #+#    #+#             */
/*   Updated: 2022/01/31 02:17:06 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy2(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char *Pointer1;
	const char *POINTER2;
	
	i = 0;
	Pointer1 = (char *)dest;
	POINTER2 = (const char * )src;
	while (i < n && POINTER2[i] != c)
	{
		Pointer1[i] = POINTER2[i]; 
		i++;
		dest++;
	}
	if (POINTER2[i] == c)
	{
		return (dest); //problamas para devolver punteros. operar con el resto
	}
	return (NULL);
}


void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *ptdest;
	const unsigned char *PTSRC;
	
	ptdest = dest;
	PTSRC = src;
	if (!dest || !src)
		return (0);
	while (n-- && *ptdest != c)
	{
		*ptdest++ = *PTSRC++;
	}
	if (*ptdest == c)
	{
		ptdest = dest;
		return (dest);
	}
	return (NULL);
}