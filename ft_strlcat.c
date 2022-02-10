/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:56:22 by fnieves           #+#    #+#             */
/*   Updated: 2022/02/10 17:30:09 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	leng_dst;
	size_t	leng_src;
	size_t	count;
	size_t	limit;

	leng_dst= ft_strlen(dst);
	leng_src = ft_strlen((char *)src);
	if (n <= leng_dst || n == 0)
		return (n + leng_src);
	count = 0;
	limit = leng_dst;
	while (src[count] && count < (n - leng_dst- 1))
	{
		dst[limit] = src[count];
		count++;
		limit++;
	}
	dst[limit] = '\0';
	return (leng_dst+ leng_src);
}
