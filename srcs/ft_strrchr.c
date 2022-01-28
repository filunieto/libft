/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 11:48:48 by fnieves           #+#    #+#             */
/*   Updated: 2022/01/27 22:44:57 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>


char	*ft_strrchr(const char *s, int c) 
{
	int leng_s;
	const char *pnt;
	
	leng_s = ft_strlen((char *)s);
	pnt = s + leng_s - 1;
	if (!*s)
	{
		if (!c)
			return ((char *)s);
		return (NULL);
	}
	if (!c)
		return ((char *)(pnt + 1));	
	while (leng_s)
	{
		if (*pnt == c)
		{
			return((char *)pnt);
		}
		pnt--;
		leng_s--;
	}
	return(NULL);
}
