#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strnstr(const char *big, const char *little, size_t len);


int main()
{
    char *str = "lorem ipsum dolor sit amet";
    char *substr = "papa";
	int len = 15;
	
	//char *substr2 = "adb";

    char *s = ft_strnstr(str, substr, len);
	//char *s2 = strnstr(str, substr, len);
	

    printf("FT_funct: la palabra %s incluye %s; Mostrando el nuevo puntero: %s\n", str,substr,s);
	//printf("Normal_ fun: la palabra %s incluye %s;  Mostrando el nuevo puntero: %s\n", str,substr,s2);
	

    return 0;
}

char	*ft_strnstr0(const char *big, const char *little, size_t len)
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

// Mi funcion que no ha pasado test war 9. 
// No habia entendido la funcion al 100%. La longitud len hay que tenerla en cuenta 
// incluso cuando recorresmo el array de little 
char	*ft_strnstr1(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!(*little)) // por qué es la negación del valor y no al puntero
		return ((char *)big);
	while (*big && len)
	{
		i = 0;
		while (big[i] == little[i] && i < len)
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

char	*ft_strnstr3(const char *big, const char *little, size_t len)
{
	size_t	i;
	char * pt_big;

	pt_big = (char *)big;
	if (!little)
		return ((char *)big);
	while (len && *pt_big)
	{
		i = 0;
		while (pt_big[i] == little[i])
		{
			if (!little[i + 1])
				return (pt_big);
			i++;
		}
		len--;
		pt_big++;
	}
	return (NULL);
}

// Funcion git normalizada. Funciona perecct
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] == big[i + j] && i + j < len)
		{
			if (!little[j + 1])
			{
				return ((char *)big + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
