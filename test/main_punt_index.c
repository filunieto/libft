#include <stdio.h>
#include <string.h>

int	ft_strlen2(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}


int main(void) //Esta es la mia
{
	const char *s;
	int c = 'i';
	s = "FelipE";
	int i = 0;

	
	if (c == '\0')
	{
		printf("c igual a 0: imprimimos %s\n", s);
		return (0);
	}
	while (s[i])
	{
		if (s[i] == c)
		{
			printf("%s\n", s);
			return (2);
		}
		s++;
	}
	printf("salimos con Null\n");
	return 1;
}