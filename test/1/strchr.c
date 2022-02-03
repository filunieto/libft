#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c);


int main(void)
{
	char c = '\0';
	int a = 'd';
	char *s = "Flipir";

	printf("%s",ft_strchr(s, a));
	printf("\n");
	printf("%s",ft_strchr(s, c));
	printf("\n");
	printf("solucion correcta abajo\n");
	printf("%s", strchr(s, a));
	printf("\n");
	printf("%s",strchr(s, c));
	printf("\n");
	return (1);
}



char	*ft_strchr(const char *s, int c) //ultima funcion para saber si he aprendido algo
{
	if (!*s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (!(char)c)
		return ((char *)s);
	return (NULL);
}	


char	*ft_strchr2(const char *s, int c) //funcion correcta
{
	while (*s && *s != (char) c)
	{
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return NULL;
}

// char	*ft_strchr(const char *s, int c) // Esta funcion es correcta y es copida
// {
// 	while (*s)
// 	{
// 		if (*s == (char)c)
// 			return ((char *)s);
// 		s++;
// 	}
// 	if (!c && !*s)
// 		return ((char *)s);
// 	return (NULL);
// }
