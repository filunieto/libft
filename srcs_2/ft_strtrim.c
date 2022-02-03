/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:46:58 by fnieves           #+#    #+#             */
/*   Updated: 2022/02/03 21:42:19 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*set_dest;
	char	*new_str;
	size_t	long_set;
	size_t	long_s1;

	long_s1 = ft_strlen((char *)s1);
	long_set = ft_strlen((char *)set);
	new_str = (char *)malloc(sizeof(char) * (long_s1 - long_set + 1));
	set_dest = ft_strstr(s1, set);
	if (!set_dest || !new_str)
		return (NULL);
	ft_strncpy(new_str, s1, (set_dest - s1));
	ft_strcat(new_str, s1 + (set_dest - s1) + long_set);
	return (new_str);
}
