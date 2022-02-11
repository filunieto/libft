/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 23:58:43 by fnieves           #+#    #+#             */
/*   Updated: 2022/02/11 21:48:14 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*pts1;
	unsigned char	*pts2;
	size_t			i;

	i = 0;
	pts1 = (unsigned char *)s1;
	pts2 = (unsigned char *)s2;
	if (!s1 || !s2 || !n)
		return (0);
	while (i < n)
	{
		if (pts1[i] != pts2[i])
		{
			return (pts1[i] - pts2[i]);
		}
		i++;
	}
	return (0);
}
