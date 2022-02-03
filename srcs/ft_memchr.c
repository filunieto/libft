/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:36:40 by fnieves           #+#    #+#             */
/*   Updated: 2022/02/02 21:05:40 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *PTS;
	PTS = (const unsigned char *)s;

	if (!s)
		return (NULL);
	while (n--)
	{
		if (*PTS++ == (char)c)
			return((unsigned char *)PTS);
	}
	return (NULL);
}
