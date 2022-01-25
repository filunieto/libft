/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 01:51:37 by fnieves           #+#    #+#             */
/*   Updated: 2022/01/25 13:53:50 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t size)
{
	size_t	leng_dest;
	size_t i;

	leng_dest = ft_strlen(dest);
	i = 0;
	while (src[i] && i < size)
	{
		dest[leng_dest + i] = src[i];
		i++; 
	}
	dest[leng_dest + i] = '\0';
	return (dest);
}
