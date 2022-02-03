#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <memory.h>

//Esta función hay que verificarla:

void	*ft_memccpy2(void *dest, const void *src, int c, size_t n);
void	*ft_memccpy3(void *dest, const void *src, int c, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);

int main( void )
{
	char buffer[61];
	char buffer2[61];
	// char *pdest;
	// char *pdest2;
	char limite;
	char string1[60] = "The quick brown dog jumps over the laty fox";

	limite = 'v';
	printf( "Function: _memccpy 60 characters or to character 's'\n" );
	printf( "Source: %s\n", string1 );
	memccpy( buffer, string1, limite, 60 );
	ft_memccpy( buffer2, string1, limite, 60 );
	// *pdest = '\0';
	// *pdest2 = '\0';
	printf( "Result ft_funcioon: %s\n", buffer2 );
	printf( "Length funcion ft: %ld characters\n", strlen( buffer2 ) );
	printf( "Result real : %s\n", buffer );
	printf( "Length: %ld characters\n", strlen( buffer ) );
}

void	*ft_memccpy3(void *dest, const void *src, int c, size_t n)
{
	unsigned char *ptdest;
	const unsigned char *PTSRC;
	
	ptdest = dest;
	PTSRC = src;
	if (!dest || !src)
		return (NULL);
	while (n--)
	{
		*ptdest++ = *PTSRC++;
		if (*ptdest == (unsigned char)c)
		{
			dest = ptdest;
			return (dest);
		}
	}
	return (NULL);
}


void	*ft_memccpy2(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char *Pointer1;
	const char *POINTER2;
	
	i = 0;
	Pointer1 = (char *)dest;
	POINTER2 = (const char * )src;
	while (i < n && POINTER2[i] != c)
	{
		Pointer1[i] = POINTER2[i]; 
		i++;
		dest++;
	}
	if (POINTER2[i] == c)
	{
		return (dest); //problamas para devolver punteros. operar con el resto
	}
	return (NULL);
}

void	*ft_memccpy4(void *dest, const void *src, int c, size_t n) //esta ha sido mi funcion pero da error de memoria 
{
	unsigned char *ptdest;
	const unsigned char *PTSRC;
	size_t	i;
	
	ptdest = dest;
	PTSRC = src;
	i = 0;
	if (!dest || !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)ptdest)[i] = ((unsigned char *)PTSRC)[i];
		if (((unsigned char *)ptdest)[i] == (unsigned char )c)
			return(ptdest + i + 1);
		i++;
	}
	return (NULL);
}


void	*ft_memccpy6(void *dst, const void *src, int c, size_t n) //funciion de github
{
	size_t	i;

	i = 0;
	while (i != n)
	{
		*((unsigned char *)dst + i) = *((unsigned char *)src + i);
		if (*((unsigned char *)dst + i) == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}

void	*ft_memccpy(void *dest, const void *src, int c, size_t n) //funciion rehecha despues de acabar la primera parte
{
	unsigned char *ptdest;
	const unsigned char *PTSRC;

	if (!dest || !src)
		return(NULL);
	ptdest = (unsigned char *)dest;
	PTSRC = (const unsigned char *)src;
	while (n > 0 && *PTSRC != (char)c)
	{
		*ptdest = *PTSRC;
		ptdest++;
		PTSRC++;
		dest++;
		n--;
	}
	if (*PTSRC == (char)c)
		return ((unsigned char*)dest);
	return (NULL);
}
