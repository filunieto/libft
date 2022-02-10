/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:48:48 by fnieves           #+#    #+#             */
/*   Updated: 2022/02/10 20:17:51 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	leng_s;

	leng_s = ft_strlen((char *)s);
	while (*(s + leng_s) != (char)c && leng_s >= 0)
	{
		leng_s--;
	}
	if (*(s + leng_s) == (char)c)
		return ((char *)(s + leng_s));
	return (NULL);
}
