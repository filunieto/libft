#include <stdio.h>
#include <string.h>
#define SIZE 20

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int main ()
{
    int ret;
	int ret2;

	int n = 85;
    char s1[SIZE] = "anzuelo";
    char s2[SIZE] = "Aticleworld";
    ret = memcmp(s1, s2, n);
	ret2 = memcmp(s1, s2, n);
	printf("Palabras %s y %s y %i bytes a comparar \n", s1, s2, n);
	printf("resultado de ft_funcion mía   %i\n", ret2);
	printf("resultado de funcion original %i\n", ret);
    return 0;
}


int	ft_memcmp(const void *s1, const void *s2, size_t n) //mi función original qu eparece que funciona
{
	unsigned char *pts1;
	unsigned char *pts2;
	size_t	i;

	i = 0;
	pts1 = (unsigned char *)s1;
	pts2 = (unsigned char *)s2;
	if (!s1 || !s2)
		return (0);
	if (!n)
		return (0);
	while (i < n)
	{
		if (pts1[i] == pts2[i])
			i++;
		else
			return (pts1[i] - pts1[i]);
	}
	return (pts1[i] - pts2[i]);
}
