#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *ft_strdup(const char *s);
int	ft_strlen(char *str);


int main(void)
{
    char *src1;
    char *src2;

    src1 = "Feliporro";
    src2 = ft_strdup(src1);
    printf(" la nueva palabra ft_str: %s\n", src2);
    src2 = strdup(src1);
    printf(" la nueva palabra con strup: %s\n", src2);

    return (0);
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


char *ft_strdup(const char *s)
{
	char	*dest;
	int		leng_s;
	int		i;

	leng_s = ft_strlen((char *)s);
	dest = (char *)malloc(sizeof(char) * (leng_s +1));
	if (!dest)
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

