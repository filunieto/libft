#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);


int main ()
{
    char str[50] = "Esta es la última casa";
	char str2[50] = "Esta es la última casa";
	char str3[50] = "Esta es la última casa";
	char str4[50] = "Esta es la última casa";
	puts(str2);
    ft_memset(str2,'$',7);
    puts(str2);
	printf("debajo función correcta\n");
    memset(str,'$',7);
    puts(str);
	printf("debajo Bzeo\n");
	bzero(str3, 2);
	puts(str3);
	ft_bzero(str4, 2);
	puts(str4);

    return(0);
}

void ft_bzero2(void *s, size_t n) //esta función he decidio RE hacerla despuñés de haber acabado la primera parte
{
	unsigned char* pts;

	pts = (unsigned char*)s;
	while (n > 0)
	{
		*pts = '\0';
		n--;
		pts++;
	}
}

void	ft_bzero(void *s, size_t n) // mi función
{
	size_t	i;
	unsigned char *point;

	point = (unsigned char *)(s);
	i = 0;
	while (i < n)
	{
		point[i] = 0;
		i++;
	}
}




void *ft_memset2(void *s, int c, size_t n)//mi funcion 
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


void *ft_memset(void *s, int c, size_t n)// la funcion que he Re hecho despues d el aprimera parte
{
	unsigned char *pts;

	pts = (unsigned char*)s;
	while (n--)
	{
		*pts++ = (char)c;
	}
	return((unsigned char*)s);
}
