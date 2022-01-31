#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{
	size_t i;
	unsigned char *point;
	
	i = 0;
	point = (unsigned char *)s;
	while (i < n)
	{
		point[i] = c;
		i++;
	}
	return (s);
}

int main ()
{
    char str[50] = "Esta es la última casa";
	char str2[50] = "Esta es la última casa";
	char str3[50] = "Esta es la última casa";
	puts(str2);
    ft_memset(str2,'$',7);
    puts(str2);
	printf("debajo función correcta\n");
    memset(str,'$',7);
    puts(str);
	printf("debajo Bzeo\n");
	bzero(str3, 2);
	puts(str3);

    return(0);
}
