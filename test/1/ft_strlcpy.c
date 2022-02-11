#include "../libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy2(char *dst, const char *src, size_t size);


int		main(void)
{
	char	*dest;
	int		arg;

	alarm(5);
	if (!(dest = (char *)malloc(sizeof(*dest) * 3)))
		return (0);
	//memset(dest, 0, 3);
	//memset(dest, 'r', 6);
	arg = ft_strlcpy(dest, "loremom", 0);

	printf ("palabra dest: %s , argumento %i\n ", dest, arg);

	// if ((arg = atoi(argv[1])) == 1)
	// {
	// 	ft_print_result(ft_strlcpy(dest, "lorem", 15));
	// 	write(1, "\n", 1);
	// 	write(1, dest, 15);
	// }
	// else if (atoi(argv[1]) == 2)
	// {
	// 	ft_print_result(ft_strlcpy(dest, "", 15));
	// 	write(1, "\n", 1);
	// 	write(1, dest, 15);
	// }
	// else if (atoi(argv[1]) == 3)
	// {
	// 	ft_print_result(ft_strlcpy(dest, "lorem ipsum", 3));
	// 	write(1, "\n", 1);
	// 	write(1, dest, 15);
	// }
	// else if (atoi(argv[1]) == 4)
	// {
	// 	ft_print_result(ft_strlcpy(dest, "lorem ipsum dolor sit amet", 15));
	// 	write(1, "\n", 1);
	// 	write(1, dest, 15);
	// }
	// else if (atoi(argv[1]) == 5)
	// {
	// 	ft_print_result(ft_strlcpy(dest, "lorem ipsum dolor sit amet", 0));
	// 	write(1, "\n", 1);
	// 	write(1, dest, 15);
	// }
	return (0);
}




size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	if (!size)
		return (ft_strlen((char *)src));
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen((char *)src));
}


size_t	ft_strlcpy2(char *dst, const char *src, size_t size) //mi intento con punteros que no ha funcionado
{
	if (!dst || !src)
		return (0);
	if (!size)
		return (ft_strlen((char *)src));
	while (size-- > 1 && *src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (ft_strlen((char *)src));
}
