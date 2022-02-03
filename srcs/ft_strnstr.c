/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 00:38:48 by fnieves           #+#    #+#             */
/*   Updated: 2022/02/01 13:30:07 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!(*little))
		return ((char *)big);
	while (*big && len)
	{
		i = 0;
		while (big[i] == little[i])
		{
			if (!(little[i + 1]))
				return ((char *)big);
			i++;
		}
		big++;
		len--;
	}
	return (NULL);
}
