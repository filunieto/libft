/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:36:40 by fnieves           #+#    #+#             */
/*   Updated: 2022/01/31 15:03:45 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	const unsigned char *ptsrc;
	size_t	i;

	ptsrc = src;
	i = 0;
	while (i < n)
	{
		if (*(ptsrc + i) == (unsigned char)c)
			return ((src + i));
		i++;
	}
	return (NULL);
}
