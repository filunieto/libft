/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:35:29 by fnieves           #+#    #+#             */
/*   Updated: 2022/02/03 19:42:03 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	leng_dest;

	leng_dest = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	dest = (char *)malloc(sizeof(char) * (leng_dest + 1));
	ft_strcpy((char *)dest, (char *)s1);
	ft_strcat((char *)dest, s2);
	return ((char *)dest);
}
