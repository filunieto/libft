#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memcpy0(void *dest, const void *src, size_t n);
void	*ft_memcpy1(void *dest, const void *src, size_t n);
void	*ft_memcpy2(void *dst, const void *src, size_t n);




int main () {
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];
   char dest_ft[50];
   //size_t n = strlen(src)+1;
   size_t n = 0;

   strcpy(dest,"Heloooo!!");
   strcpy(dest_ft,"Heloooo!!");
   printf("Before ft_memcpy dest_ft = %s\n", dest_ft);
   printf("Before memcpy dest = %s\n valor de los n byte a copiar = %li\n", dest, n);
   memcpy(dest, src, n);
   ft_memcpy(dest_ft, src, n);
   printf("Resultado  funcion ft_ memcpy dest  = %s\n", dest_ft);
   printf("Resultado  funcion real memcpy dest = %s\n", dest);
   
   return(0);
}

//otra version: la más limpia y elegante
void	*ft_memcpy1(void *dest, const void *src, size_t n)
{
	char		*dp;
	const char	*sp;

	dp = dest;
	sp = src;
	while (n--)
		*dp++ = *sp++;
	return (dest);
}

//con la denominación más retorcida

void	*ft_memcpy2(void *dst, const void *src, size_t n)
{
	size_t i;

	if (!dst || !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

void	*ft_memcpy5(void *dest, const void *src, size_t n) //esta es la mía sintetizando todo
{
	const unsigned char *PTSRC;
	unsigned char *ptdest;

	PTSRC = src;
	ptdest = dest;
	if (!dest && !src)
		return (0);
	while (n--)
		*ptdest++ = *PTSRC++;
	return (dest);
}


void	*ft_memcpy0(void *dest, const void *src, size_t n)
{
	unsigned char *point1;
	const unsigned char *POINT2;
	size_t	i;

	point1 = (unsigned char*)(dest);
	POINT2 = (const unsigned char*)(src);
	i = 0;
	while (i < n)
	{
		point1[i] = POINT2[i];
		i++;
	}
	return (dest);
}

void	*ft_memcpy(void *dest, const void *src, size_t n) //funcion rehecha después de acabar primera parte
{
	unsigned char *ptdest;
	const unsigned char *PTSRC;

	if (!dest || !src)
		return(NULL);
	ptdest = (unsigned char *)dest;
	PTSRC = (const unsigned char *)src;
	while (n > 0)
	{
		*ptdest = *PTSRC;
		ptdest++;
		PTSRC++;
		n--;
	}
	return (dest);
}
