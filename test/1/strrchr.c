#include "../libft.h"


char	*ft_strrchr(const char *s, int c);

int	main()
{
	char a[] = "aiueo";
	char b[] = "\0";
	char		c[] = "bonjour";
	char d = 's';

	printf("flipi   : %s\n", ft_strrchr(a, 'a'));
	printf("library : %s\n", strrchr(a, 'a'));
	printf("flipi   : %s\n", ft_strrchr(a, 'i'));
	printf("library : %s\n", strrchr(a, 'i'));
	printf("flipi   : %s\n", ft_strrchr(a, 'u'));
	printf("library : %s\n", strrchr(a, 'u'));
	printf("flipi   : %s\n", ft_strrchr(a, 'e'));
	printf("library : %s\n", strrchr(a, 'e'));
	printf("flipi   : %s\n", ft_strrchr(a, 'o'));
	printf("library : %s\n", strrchr(a, 'o'));
	printf("flipi   : %s\n", ft_strrchr(a, 0));
	printf("library : %s\n", strrchr(a, 0));
	printf("flipi   : %p\n", ft_strrchr(a, 0));
	printf("library : %p\n", strrchr(a, 0));
	printf("library : %p\n", a);
	printf("flipi   : %s\n", ft_strrchr(a, 1));
	printf("library : %s\n", strrchr(a, 1));
	printf("flipi   : %s\n", ft_strrchr(a, 'z'));
	printf("library : %s\n", strrchr(a, 'z'));
	printf("flipi   : %s\n", ft_strrchr(b, 'z'));
	printf("library : %s\n", strrchr(b, 'z'));
	printf("flipi   : %s\n", ft_strrchr(b, '\0'));
	printf("library : %s\n", strrchr(b, '\0'));
	printf("flipi   : %s\n", ft_strrchr(c, d));
	printf("library : %s\n", strrchr(c, d));
}

// char	*ft_strrchr(const char *s, int c) //Mi version original :probelmas con el stri nulo y , si el parametro es un numero entero. el puntero se iba al carajo
// {
// 	int leng_s;
// 	const char *pnt;
	
// 	leng_s = ft_strlen((char *)s);
// 	pnt = s + leng_s;
// 	while (pnt)
// 	{
// 		if (s[leng_s] == c)
// 		{
// 			return((char *)pnt);
// 		}
// 		pnt--;
// 		leng_s--;
// 	}
// 	return(NULL);
// }



char	*ft_strrchr1(const char *s, int c) //despues de volver atras con más conocimiento me ha slaido esto
{
	int leng_s;
	
	leng_s = ft_strlen((char *)s);
	while (*(s + leng_s) != (char)c && leng_s >= 0)
	{
		leng_s--;
	}
	if (*(s + leng_s) == (char)c)
		return ((char *)(s + leng_s)); //atencion aquí: hay que formatear o moldear la salida
	return (NULL);
}



char	*ft_strrchr2(const char *s, int c) //mi funcion original
{
	int leng_s;
	const char *pnt;
	
	leng_s = ft_strlen((char *)s);
	pnt = s + leng_s - 1;
	if (!*s)
	{
		if (!c)
			return ((char *)s);
		return (NULL);
	}
	if (!c)
		return ((char *)(pnt + 1));	
	while (leng_s)
	{
		if (*pnt == c)
		{
			return((char *)pnt);
		}
		pnt--;
		leng_s--;
	}
	return(NULL);
}

char	*ft_strrchr3(const char *s, int c) //funcion que NO ha pasado el test war al 100%
{
	int	leng_s;

	leng_s = ft_strlen((char *)s);
	while (*(s + leng_s) != (char)c && leng_s >= 0)
	{
		leng_s--;
	}
	if (*(s + leng_s) == (char)c)
		return ((char *)(s + leng_s));
	return (NULL);
}

//la fucnion que intento despues de test war. el unico test no pasado el 5. No entiendo porqué
//Error arriba corregido . La condicone en el while tiene que ser mayor que 0, ya que el puntero vuelve a decrementar y salta
	// char		c[] = "bonjour";
	// char d = 's';
char	*ft_strrchr(const char *s, int c) 
{
	size_t	leng_s;
	char	*pts;

	leng_s = ft_strlen((char *)(s));
	pts = (char *)(s + leng_s);
	while ((leng_s > 1) && *pts != (char)c)
	{
		pts--;
		leng_s--;
	}
	if (*pts == (char)c)
		return (pts);
	return (NULL);
}
