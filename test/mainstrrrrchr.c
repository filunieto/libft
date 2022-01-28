
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

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

char	*ft_strrchr(const char *s, int c) 
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




int	main()
{
	char a[] = "aiueo";
	printf("zisaku  : %s\n", ft_strrchr(a, 'a'));
	printf("library : %s\n", strrchr(a, 'a'));
	printf("zisaku  : %s\n", ft_strrchr(a, 'i'));
	printf("library : %s\n", strrchr(a, 'i'));
	printf("zisaku  : %s\n", ft_strrchr(a, 'u'));
	printf("library : %s\n", strrchr(a, 'u'));
	printf("zisaku  : %s\n", ft_strrchr(a, 'e'));
	printf("library : %s\n", strrchr(a, 'e'));
	printf("zisaku  : %s\n", ft_strrchr(a, 'o'));
	printf("library : %s\n", strrchr(a, 'o'));
	printf("zisaku  : %s\n", ft_strrchr(a, 0));
	printf("library : %s\n", strrchr(a, 0));
	printf("zisaku  : %p\n", ft_strrchr(a, 0));
	printf("library : %p\n", strrchr(a, 0));
	printf("library : %p\n", a);
	printf("zisaku  : %s\n", ft_strrchr(a, 1));
	printf("library : %s\n", strrchr(a, 1));
	printf("zisaku  : %s\n", ft_strrchr(a, 'z'));
	printf("library : %s\n", strrchr(a, 'z'));
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
