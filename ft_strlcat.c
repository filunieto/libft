/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:56:22 by fnieves           #+#    #+#             */
/*   Updated: 2022/02/03 00:19:00 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;
	size_t	count;
	size_t	limit;

	d_len = ft_strlen(dst);
	s_len = ft_strlen((char *)src);
	if (dstsize <= d_len || dstsize == 0)
		return (dstsize + s_len);
	count = 0;
	limit = d_len;
	while (src[count] && count < (dstsize - d_len - 1))
	{
		dst[limit] = src[count];
		count++;
		limit++;
	}
	dst[limit] = '\0';
	return (d_len + s_len);
}
