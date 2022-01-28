#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


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


// char *ft_strdup(const char *s) //esta funcion no copia bien. En destination no hay que mover el puntero
// {
// 	char *dest;
// 	int leng_s;
	
// 	leng_s = ft_strlen2(s);
// 	if (!(dest = malloc(sizeof(char) * (leng_s +1))))
// 		return (NULL);
// 	while (*s)
// 	{
// 		*dest = *s;
// 		printf("Char de S: %c, S++: %s y Des++: %s \n ", *s , s, dest);
// 		s++;
// 		dest++;
// 	}
// 	*dest = '\0';
// 	return ((char *)dest);
// }


char *ft_strdup(const char *s)
{
	char *dest;
	int leng_s;
	int i;
	
	leng_s = ft_strlen((char *)s);
	if (!(dest = (char *)malloc(sizeof(char) * (leng_s +1))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return ((char *)dest);
}



int main(void)
{
    char *src1;
    char *src2;

    src1 = "Felipe";
    src2 = ft_strdup(src1);
    printf(" la nueva palabra ft_str: %s\n", src2);
    src2 = strdup(src1);
    printf(" la nueva palabra con strup: %s\n", src2);

    return (0);
}