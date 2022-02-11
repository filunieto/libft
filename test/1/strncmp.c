
#include "../libft.h"


int	ft_strncmp(const char *s1, const char *s2, size_t size);

void test(char *s1, char *s2, int size);


int		main(void)
{
	// cambio "HelloWorld!!!!!" por una más corta
	char str1[] = "H!!!!!";  
	char *str2[] = {
		"HelloWorld!",
		"Hello",
		"helloworld",
		"",
		NULL
	};
	int size[] = {
		0, 5, 10, 15, 20, 555
	};

	int i = 0;
	while (str2[i])
	{
		printf("------------------\n");
		printf("str1: %s\nstr2: %s\n", str1,str2[i]);
		printf("------------------\n");
		int j = 0;
		while (size[j] != 555)
		{
			test(str1, str2[i], size[j]);
			j++;
		}
		i++;
	}

	printf("------------------\n");
	printf("      error       \n");
	printf("------------------\n");
	printf("test\\200, test\\0\n");
	test("test\200", "test\0", 6);

	printf("\n↓leakcheck\n\n");
	while(1);
}


// funcion de da errores en los mimsos test que memcmp
int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		return (0);
	}
	while (s1[i] && i < size)
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (s1[i] - s2[i]);
}

void test(char *s1, char *s2, int size)
{
	printf("n = %d\n", size);
	int org_rtn = strncmp(s1,s2,size);
	int ft_rtn = ft_strncmp(s1,s2,size);

	org_rtn == ft_rtn ? printf("GREEN\n") : printf("RED\n");
	printf("strncmp()   =>%d\n", org_rtn);
	printf("ft_strncmp()=>%d\n", ft_rtn);
	printf("RESET\n");
}

// Funcion de git que no pasa el ultimo test  . El más chungo . Hayq que castear a unsigned char
int ft_strncmp2(const char *s1, const char *s2, size_t size)
{
	size_t i;

	i = 0;
	if (!size)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < size - 1)
		i++;
	return (s1[i] - s2[i]);
}

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t i;

	i = 0;
	while (i < size && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
		i++;
	}
	return (0);
}
