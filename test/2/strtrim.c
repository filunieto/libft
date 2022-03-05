#include "../libft.h"

/* Probar esta función quitando los prototipos e incluyendo solo las librerías libft.h*/

char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strncpy(char *dest, const char *src, size_t size);
char	*ft_strstr(const char *haystack, const char *needle);



int main(void)
{
	char const *s1;
	char const *s2;
	char *s3;

	s1 = "Klalabaza";
	s2 = "lab";
	s3 = ft_strtrim(s1, s2);
	printf("el string resultado: %s\n", s3);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set) //quitar los printf. La función parece correcta
{
	char *set_dest;
	char *new_str;
	size_t	long_set;
	size_t	long_s1;

	long_s1 = ft_strlen((char *)s1);
	long_set = ft_strlen((char *)set);
	new_str = (char *)malloc(sizeof(char) * (long_s1 - long_set + 1));
	set_dest = ft_strstr(s1, set);
	//printf ("s1: %s y set:%s \n", s1, set);
	//printf ("set_dest: %s \n", set_dest);
	if (!set_dest || !new_str)
		return (NULL);
	ft_strncpy(new_str, s1, (set_dest - s1));

	//printf ("N bits a copiar: %li. New_str despues de strncp: %s \n",(set_dest - s1), new_str);
	ft_strcat(new_str, s1 + (set_dest - s1) +long_set);
	return (new_str);
}

char	*ft_strncpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	while (!src[i] && i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}


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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *dest;
	size_t leng_dest;

	leng_dest = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	dest = (char *)malloc(sizeof(char) * (leng_dest + 1));
	ft_strcpy((char *)dest, (char *)s1);
	ft_strcat((char *)dest, s2);
	return ((char *)dest);
}

// char	*ft_strcat(char *dest, const char *src)
// {
// 	size_t	len_dest;
// 	size_t	i;

// 	len_dest = ft_strlen(dest);
// 	i = 0;
// 	while (src[i])
// 	{
// 		dest[len_dest + i] = src[i];
// 		i++;
// 	}
// 	dest[len_dest + i] = '\0';
// 	return (dest);
// }



char	*ft_strcat(char *dest, const char *src)
{
	size_t	len_dest;
	size_t	i;

	len_dest = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
