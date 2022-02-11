/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:36:40 by fnieves           #+#    #+#             */
/*   Updated: 2022/02/11 13:20:09 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *pts;

	pts = (unsigned char *)s;
	if (!s)
		return (NULL);
	while (*pts && n)
	{
		if (*pts == (unsigned char)c)
		{
			return (pts);
		}
		pts++;
		n--;
	}
	return (NULL);
}
