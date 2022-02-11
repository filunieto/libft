/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:48:48 by fnieves           #+#    #+#             */
/*   Updated: 2022/02/11 20:10:17 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c) 
{
	int	leng_s;
	char	*pts;

	leng_s = ft_strlen((char *)(s));
	pts = (char *)(s + leng_s);
	while ((leng_s > 0) && *pts != (char)c)
	{
		pts--;
		leng_s--;
	}
	if (*pts == (char)c)
		return (pts);
	return (NULL);
}
