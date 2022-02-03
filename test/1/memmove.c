#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

// 
int main ()
{
    char dest[] = "Juan";
	char dest2[] = "Juan";
    const char src[]  = "Felipe";
	size_t n = 10;
    //Source and destination before memmove
    printf("Before memmove >> dest = %s, src = %s\n\n", dest, src);
    memmove(dest, src, n);
	ft_memmove(dest2, src, n);
    //Source and destination after memmove
    printf("After mi ft: memmove >> dest = %s, src = %s\n\n", dest2, src);
	printf("After origg: memmove >> dest = %s, src = %s\n\n", dest, src);
    return 0;
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *ptdest;
	const unsigned char *PTSRC;
	if (!dest || !src)
		return (NULL);
	ptdest = (unsigned char *)dest;
	PTSRC = (const unsigned char *)src;
	while (n > 0)
	{
		*ptdest = *PTSRC;
		n--;
		ptdest++;
		PTSRC++;
	}
	return (dest);
}

