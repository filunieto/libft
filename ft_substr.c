/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 01:58:52 by fnieves           #+#    #+#             */
/*   Updated: 2022/02/03 13:34:58 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned char	*dest;
	unsigned char	*pts;
	unsigned int	i;
	unsigned int	long_dest;

	long_dest = len - start;
	pts = (unsigned char *)s;
	dest = (unsigned char *)malloc(sizeof(char) * (long_dest + 1));
	i = 0;
	if (!dest || !s)
		return (NULL);
	while (pts[start + i] && long_dest)
	{
		dest[i] = pts[start + i];
		long_dest--;
		i++;
	}
	dest[i] = '\0';
	if (!pts[start + i] || i < len)
		return ((char *)dest);
	return (NULL);
}
