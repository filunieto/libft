/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 20:56:22 by fnieves           #+#    #+#             */
/*   Updated: 2022/01/25 22:17:36 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	leng_dst;
	size_t	j;

	leng_dst = ft_strlen(dst);
	j = 0;
	while (src[j] && j < size)
	{
		dst[leng_dst + j] = src[j];
		j++;
	}
	dst[leng_dst + j] = "\0";
	return (leng_dst + j); 
}
