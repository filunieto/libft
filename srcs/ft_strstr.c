/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 00:38:48 by fnieves           #+#    #+#             */
/*   Updated: 2022/02/01 13:15:43 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
1.vamos a ir desplazando el primer puntero[0] 
hasta que coincida con point2[0] o llegue al final de la palabra
2. si encontramos la coincidencia , paramos el puntero,
 y comparamos recorriendo ambos arrays.
3. si ambos arrays son iguales --> devolvermos el puntero s1
4. si en algunn momento alguna parte del array no coincide. volvemos a 1
*/

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;

	if (!(*needle))
		return ((char *)haystack);
	while (*haystack)
	{
		i = 0;
		while (haystack[i] == needle[i])
		{
			if (!(needle[i + 1]))
				return ((char *)haystack);
			i++;
		}
		haystack++;
	}
	return (NULL);
}
