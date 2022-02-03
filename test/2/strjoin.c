#include "../../includes/libft.h"

/* Probar esta función quitando los prototipos e incluyendo solo las librerías libft.h*/

char	*ft_strjoin(char const *s1, char const *s2);
int	ft_strlen(char *str);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strcpy(char *dest, char *src);


int main(void)
{
	char const *s1;
	char const *s2;
	char *s3;

	s1 = "Juan";
	s2 = "Felipe";
	s3 = ft_strjoin(s1, s2);
	printf("el string resultado: %s\n", s3);
	return (0);
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
