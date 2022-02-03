#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strnstr(const char *big, const char *little, size_t len);


int main()
{
    char *str = "Foo Bar Baz";
    char *substr = "juan";
	int len = 15;
	
	//char *substr2 = "adb";

    char *s = ft_strnstr(str, substr, len);
	//char *s2 = strnstr(str, substr, len);
	

    printf("FT_funct: la palabra %s incluye %s; Mostrando el nuevo puntero: %s\n", str,substr,s);
	//printf("Normal_ fun: la palabra %s incluye %s;  Mostrando el nuevo puntero: %s\n", str,substr,s2);
	

    return 0;
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
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
