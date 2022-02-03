#include<stdio.h>
#include<string.h>

char	*ft_strstr(const char *haystack, const char *needle);


int main()
{
    char *str = "Klalabaza";
    char *substr = "lab";
	
	//char *substr2 = "adb";

    char *s = ft_strstr(str, substr);
	//char *s2 = strstr(str, substr);
	

    printf("FT_funct: la palabra %s ,(%p)  incluye %s;  Mostrando el nuevo puntero: %s y : %p\n",str, str,substr,s, s);
	printf("resta de punteros %li \n", s - str);
	//printf("Original: la palabra %s incluye %s;  Mostrando el nuevo puntero: %s y : %p\n", str,substr,s2, s2);
	

    return 0;
}


char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	
	if (!(*needle))
		return ((char *)haystack);
	while (*haystack)
	{
		i = 0;
		while (haystack[i] ==  needle[i])
		{
			if (!(needle[i + 1]))
				return ((char *)haystack);
			i++;
		}
		haystack++;
	}
	return (NULL);
}
