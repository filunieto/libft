
#include "../includes/libft.h"
#include <string.h>


char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != c)
	{
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return NULL;
}

int	ft_strlen_const(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
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


char	*ft_strrchr(const char *s)
{
	char	*inv;
	int leng_s;
	int	i;
	
	
	
	leng_s = ft_strlen_const(s);
	if (!(inv = (char *)malloc(sizeof(char) * (leng_s + 1))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		inv[i] = s[leng_s - 1 - i];
		i++;
	}
	// inv[leng_s + 1] = "\0";
	return (inv);
}

int main(void)
{
	char *str = "Candelabroespejo";
	const char *str_inv;
	char *nuev_str;
	char c;
	
	c = '\0';
	str_inv = ft_strrchr(str);
	printf("palabra invertida %s \n", str_inv);
	nuev_str = ft_strchr(str_inv, c);
	printf("El nuevo morfema %s \n", nuev_str);
	printf("Solucion de la funcion inversa correcta %s \n", strrchr(str, c));
	printf("Solucion de la funcion no inversa correcta %s \n", strchr(str, c));
	return (1);
}