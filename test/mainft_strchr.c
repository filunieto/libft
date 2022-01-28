#include <stdio.h>
#include <string.h>


// char	*ft_strchr(const char *s, int c) //mi funcion. Solo le fallaba el return y que está escrita muy bastamente
// {
// 	int	i;
// 	int leng_s;
	
// 	char *NULO = "Nulor";
// 	leng_s = ft_strlen2(s);
// 	i = 0;

// 	while (i <= leng_s)
// 	{
// 		if (s[i] == c)
// 		{
// 			while (i > 0)
// 			{
// 				s++;
// 				i--;
// 			}
// 			//printf("comprobar print: %s y la solucion return %s\n", s, (char *)s);
// 			return (char *)s; //no entiendo por qué se escribe así y no sólo s
// 		}
// 		i++;
// 	}
// 	return (NULO);
// }

char	*ft_strchr(const char *s, int c)
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


int main(void)
{
	char c = 'a';
	int a = 1;
	char *s = "cabeza";

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
