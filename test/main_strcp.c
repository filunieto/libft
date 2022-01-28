#include "../includes/libft.h"
#include <string.h>

char	*ft_strncpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	
	i = 0;
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	while (!src[i] && i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// char	*ft_strncpy(char *dest, char *src, unsigned int n)
// {
// 	unsigned int	i;

// 	i = 0;
// 	while (src[i] != '\0' && i < n)
// 	{
// 		dest[i] = src[i];
// 		++i;
// 	}
// 	while (i < n)
// 	{
// 		dest[i] = '\0';
// 		i++;
// 	}
// 	return (dest);
// }



void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 1;

	while (str[i])
		ft_putchar(str[i++]);
}

void	test(char *dest, char *src, unsigned int n)
{
	ft_putstr(ft_strncpy(dest, src, n));
	ft_putchar('\n');
	ft_putchar('-');
	ft_putchar('\n');
	ft_putstr(strncpy(dest, src, n));
	ft_putchar('\n');
}

int main(void)
{
	char dest[20] = {'u', 'n', ' ', 't', 'e', 's', 't', 'e'};
	char src[] = {'v', 'o', 'i', 'l', 'a', ' ','f', 'i', 'n', '\0'};

	test(dest, src, 10);
	return 0;
}