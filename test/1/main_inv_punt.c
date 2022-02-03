#include <string.h>
#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int main(void)
{
	const char *s;
	//int c;
	//int longitud;

	
	const char *PALAB = "FelipE";
	s = PALAB;
	//c = 'l';
	//longitud = ft_strlen(s);

	int j = -1;

	printf("recorremos hacia atras longitud = %c \n", s[-1]);
	while (s[j] && j >= -(ft_strlen(s)))
	{
		printf("caract 2: %c, \n", s[j]);
		// printf("direcc memoria 2 %p\n", s);
		// if (s[j] == c)
		// 	printf("caract 2: %c, strin: %s\n", s[j], s);
		j--;
		//s--;
	}

	return (1);
}

