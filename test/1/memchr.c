
#include <stdio.h>
#include <string.h>


void	*memchr(const void *s, int c, size_t n);

int main ()
{
   const char str[] = "\0";
   const char ch = '\0';
   char *ret;
   char *ret2;

   ret = memchr(str, ch, strlen(str));
   ret2 = memchr(str, ch, strlen(str));

   printf(" el strind FT_ después de |%c|  es  : |%s|\n", ch, ret2);
   printf("el strind ORig después de |%c|  es  : |%s|\n", ch, ret);

   return(0);
}

void	*ft_memchr(const void *s, int c, size_t n) //mi función despues de rehacer la primera parte
{
	const unsigned char *PTS;
	PTS = (const unsigned char *)s;

	if (!s)
		return (NULL);
	while (n--)
	{
		if (*PTS++ == (char)c)
			return((unsigned char *)PTS);
	}
	return (NULL);
}



void	*ft_memchr1(const void *src, int c, size_t n)
{
	const unsigned char *ptsrc;
	size_t	i;

	ptsrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		if (ptsrc[i] == (unsigned char)c) 
			return ((unsigned char *)src);
		i++;
		src++;
	}
	return (NULL);
}

// void	*ft_memchr2(const void *src, int c, size_t n) //un intento que no ha salido
// {
// 	size_t	i;

// 	i = 0;
// 	while (i != n)
// 	{
// 		if (*((unsigned char *)src + i) == (unsigned char)c)
// 			return ((unsigned char *)src);
// 		i++;	
// 	}
// 	return (NULL);
// }


void	*ft_memchr3(const void *s, int c, size_t n) //de github
{
	size_t			i;
	unsigned char	*str;
	unsigned char	character;

	str = (unsigned char *)s;
	character = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str == character)
		{
			return (str);
		}
		str++;
		i++;
	}
	return (NULL);
}
