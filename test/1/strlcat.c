#include <stdio.h>
#include <string.h>


size_t	ft_strlcat(char *dst, const char *src, size_t size);
int	ft_strlen(char *str);

int main()
{
    char first[] = "This is ";
    char last[] = "a potentially long string";
    int r;
    int size = 16;
    char buffer[size];

    strcpy(buffer,first);
    r = ft_strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size) //mi función. La cambié del repositorio , por problmas con el test auqneu creo que funcionaba
{
	size_t	leng_src;
	size_t	leng_dst;
	size_t	j;

	leng_dst = ft_strlen(dst);
	leng_src = ft_strlen((char *)src);
	j = 0;
	if (size == 0)
		return (leng_dst);
	if (leng_src > size - 1)
		return (leng_dst + size);
	while (src[j] && j < size - 1)
	{
		dst[leng_dst + j] = src[j];
		j++;
	}
	dst[leng_dst + j] = "\0";
	return (leng_dst + j -1);
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