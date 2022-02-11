#include "../libft.h"
#include <stdio.h>
#include <string.h>
#define SIZE 20

// Errores en la diferencia en la salida y que no me fijo en los miembros de una resta

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int main ()
{
    int ret;
	int ret2;

	int n = 2;
    char s1[SIZE] = "t\300";
    char s2[SIZE] = "t\0";
    ret = memcmp(s1, s2, n);
	ret2 = ft_memcmp(s1, s2, n);
	printf("Palabras %s y %s y %i bytes a comparar \n", s1, s2, n);
	printf("resultado de ft_funcion mía   %i\n", ret2);
	printf("resultado de funcion original %i\n", ret);
    return 0;
}


// int	ft_memcmp2(const void *s1, const void *s2, size_t n) //mi función original No funcioan porque devuelvo como un tonto pt1 - pt1
// {
// 	unsigned char *pts1;
// 	unsigned char *pts2;
// 	size_t	i;

// 	i = 0;
// 	pts1 = (unsigned char *)s1;
// 	pts2 = (unsigned char *)s2;
// 	if (!s1 || !s2)
// 		return (0);
// 	if (!n)
// 		return (0);
// 	while (i < n)
// 	{
// 		if (pts1[i] == pts2[i])
// 			i++;
// 		else
// 			return (pts1[i] - pts1[i]);
// 	}
// 	return (pts1[i] - pts2[i]);
// }

//usando punteros abajo da error en un caso. No se puede usar: ft_memcmp("t\200", "t\0", 2)
// después de corregir strncmp (mismo caso de fallo), la clave es
// que los punteros tienen que ser unsigned char
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*pts1;
	char	*pts2;

	pts1 = (char *)s1;
	pts2 = (char *)s2;
	if (!s1 || !s2 || !n)
		return (0);
	while (n--)
	{
		if (*pts1 != *pts2)
		{	
			printf("valor de punteros 1: %c , 2: %c y diferencia: %i\n",*pts1, *pts2, *pts1 - *pts2 );
			return (*pts1 - *pts2);
		}
		pts1++;
		pts2++;
	}
	return (0);
}


int	ft_memcmp2(const void *s1, const void *s2, size_t n)
{
	unsigned char	*pts1;
	unsigned char	*pts2;
	size_t			i;

	i = 0;
	pts1 = (unsigned char *)s1;
	pts2 = (unsigned char *)s2;
	if (!s1 || !s2 || !n)
		return (0);
	while (i < n)
	{
		if (pts1[i] != pts2[i])
		{
			return (pts1[i] - pts2[i]);
		}
		i++;
	}
	return (0);
}
