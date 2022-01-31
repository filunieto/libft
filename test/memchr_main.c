#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *src, int c, size_t n);


int main ()
{
   const char str[] = "http://www.w3cschool.cc";
   const char str2[] = "http://www.w3cschool.cc";
   const char ch = 'c';
   char *ret;
   char *ret2;

   ret = memchr(str, ch, strlen(str));
   ret2 = memchr(str2, ch, strlen(str2));

   printf("|%c| caracter ft funvion - obtiene:  - |%s|\n", ch, ret2);
   printf("|%c| caracter orignial func obtiene: - |%s|\n", ch, ret);

   return(0);
}


void	*ft_memchr(const void *src, int c, size_t n)
{
	const unsigned char *ptsrc;
	size_t	i;

	ptsrc = src;
	i = 0;
	while (i < n)
	{
		if (*(ptsrc + i) == (unsigned char)c)
			return ((src + i));
		i++;
	}
	return (NULL);
}
