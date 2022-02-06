/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:51:32 by fnieves           #+#    #+#             */
/*   Updated: 2022/02/06 19:27:15 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*recursión de strchr.c?
vamos recorriendo s, buscando los carateres. 
una vez  localizados, necesitamos apuntar
 los lugares para reservar memorias con malloc
alojar los acaracteres en los espacioes de memoria reservados
se hace free?
*/

char	**ft_split(char const *s, char c)
{
	char	**dest;
	size_t	nb_array;

	dest = (char **)malloc(sizeof(char) * ft_strlen(s) + 1);
	while (*s)
	{
		if (*s == (char)c)
			dest[nb_array] = s;
			nb_array++;
		s++;
	}
	if (!(char)c)
		return (dest(ft_strlen(s) + 1));
	if (nb_array == 0)
		return (NULL);
	return (dest);
}
