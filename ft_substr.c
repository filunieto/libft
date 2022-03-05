/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 01:58:52 by fnieves           #+#    #+#             */
/*   Updated: 2022/03/05 17:51:09 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned char	*dest;
	unsigned char	*pts;
	unsigned int	i;

	pts = (unsigned char *)s;
	dest = (unsigned char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!dest || !s)
		return (NULL);
	while (pts[start + i] && len - i > 0)
	{
		dest[i] = pts[start + i];
		i++;
	}
	dest[i] = '\0';
	if (!pts[start + i] || len == i)
		return ((char *)dest);
	return (NULL);
}
