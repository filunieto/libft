/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:36:40 by fnieves           #+#    #+#             */
/*   Updated: 2022/02/09 01:33:33 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*pts;

	pts = (const unsigned char *)s;
	if (!s)
		return (NULL);
	while (n--)
	{
		if (*pts++ == (char)c)
			return ((unsigned char *)pts);
	}
	return (NULL);
}
