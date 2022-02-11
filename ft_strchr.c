/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 01:07:00 by fnieves           #+#    #+#             */
/*   Updated: 2022/02/11 18:58:33 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*pts;

	pts = (char *)(s);
	while (*pts)
	{
		if (*pts == (char)c)
			return (pts);
		pts++;
	}
	if (!(char)c)
		return (pts);
	return (NULL);
}
