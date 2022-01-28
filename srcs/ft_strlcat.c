/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:56:22 by fnieves           #+#    #+#             */
/*   Updated: 2022/01/26 01:33:20 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	leng_src;
	size_t	leng_dst;
	size_t	j;

	leng_dst = ft_strlen(dst);
	leng_src = ft_strlen(src);
	j = 0;
	if (size == 0)
		return (leng_dst);
	if (leng_src > size - 1)
		return (leng_dst + size);
	while (src[j] && j < size - 1)
	{
		dst[leng_dst + j] = src[j];
		j++;
	}
	dst[leng_dst + j] = "\0";
	return (leng_dst + j -1);
}
