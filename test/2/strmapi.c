/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves <fnieves@42heilbronn.de>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:41:04 by fnieves           #+#    #+#             */
/*   Updated: 2022/02/06 16:31:27 by fnieves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


char ft_print(unsigned int nb, char c);
int	ft_strlen(char *str);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char *ft_strmapi2(char const *s, char (*f)(unsigned int, char));


int main(void)
{
	char  *s = "felipe";
	char *dest;
	//abajo declaramos el puntero a una funcion--> tipo de retorno + (* nombre_func) + parametros
	char (*funcion)(unsigned int, char);
	//char *(*funcion2)(char const *, char (*f)(unsigned int, char));
	unsigned int nb;
	char c;
	char res;
	
	funcion = &ft_print;
	//funcion2 = &ft_strmapi;
	nb = 5;
	c = 'd';

	res = funcion (nb, c);
	dest = ft_strmapi(s, ft_print);
	printf ("resultadio de pasar la funcion en print: %c\n", res);
	printf ("resultadio de pasar la funcion ft_strmapi: %s\n", dest);
	return (0);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *dest;
	unsigned int	i;  //atención el tipo de dato

	i = 0;
	dest = malloc(sizeof(char *) * ft_strlen((char*)s) + 1);
	if (!dest || !s)
		return(NULL);
	while (s)
	{
		dest[i] = (*f)(i, s[i]); //esta es la frase clave
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strmapi2(char const *s, char (*f)(unsigned int, char))
{
	char *dest;
	unsigned int	i;  //atención el tipo de dato
	//f = &ft_print;

	i = 0;
	dest = malloc(sizeof(char *) * ft_strlen((char*)s) + 1);
	if (!dest || !s)
		return(NULL);
	while (s)
	{
		dest[i] = (*f)(i, s[i]); //esta es la frase clave
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


char ft_print(unsigned int nb, char c)
{
	char c_nuevo;
	
	c_nuevo = c + nb;
	printf("letra original %c, y letra modificada añadiendo %i: %c\n", c, nb, c_nuevo);
	return (c_nuevo);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
