/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 14:32:48 by fnieves           #+#    #+#             */
/*   Updated: 2022/02/09 01:29:07 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy2(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	char		*pointer1;
	const char	*pointer2;

	i = 0;
	pointer1 = (char *)dest;
	pointer2 = (const char * )src;
	while (i < n && pointer2[i] != c)
	{
		pointer1[i] = pointer2[i]; 
		i++;
		dest++;
	}
	if (pointer2[i] == c)
	{
		return (dest);
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