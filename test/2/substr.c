#include "../../includes/libft.h"
 
// Following function extracts characters present in `src`
// between `m` and `n` (excluding `n`)
char* substr(const char *src, int m, int n);
char	*ft_substr(const char *s, unsigned int start, size_t len);


int main()
{
    char src[] = "substr function Implementation";
 
    int m = 3;
    int n = 8;
 
    char* dest = substr(src, m, n);
	char* dest2 = ft_substr(src, m, n);
	printf("Funcion ft: %s\n", dest2);
    printf("Función or: %s\n", dest);
 
    return 0;
}


char	*ft_substr(const char *s, unsigned int start, size_t len) //primer intento. la funcion me ha salido muy larga (revisar y quitar variables). version 0
{
	unsigned char *dest;
	unsigned char *pts;
	unsigned int	i;
	unsigned int	long_dest;
	
	long_dest = len - start;
	pts = (unsigned char *)s;
	dest = (unsigned char *)malloc(sizeof(char) * (long_dest + 1));
	i = 0;
	if (!dest || !s)
		return (NULL);
	while (pts[start + i] && long_dest)
	{
		dest[i] = pts[start + i];
		long_dest--;
		i++;
	}
	dest[i] = '\0';
	if (!pts[start + i] || i < len)
		return ((char*) dest);
	return (NULL);
}



char* substr(const char *src, int m, int n)
{
    // get the length of the destination string
    int len = n - m;
 
    // allocate (len + 1) chars for destination (+1 for extra null character)
    char *dest = (char*)malloc(sizeof(char) * (len + 1));
 
    // extracts characters between m'th and n'th index from source string
    // and copy them into the destination string
    for (int i = m; i < n && (*(src + i) != '\0'); i++)
    {
        *dest = *(src + i);
        dest++;
    }
 
    // null-terminate the destination string
    *dest = '\0';
 
    // return the destination string
    return dest - len;
}
 





// char	*ft_substr3(char const *s, unsigned int start, size_t len) //de github
// {
// 	char	*new_str;
// 	size_t	i;
// 	size_t	j;

// 	if (!s || !(new_str = (char *)malloc(len + 1)))
// 		return (0);
// 	i = start;
// 	j = 0;
// 	while (i < ft_strlen((char *)s) && j < len)
// 		new_str[j++] = s[i++];
// 	new_str[j] = '\0';
// 	return (new_str);
// }

// char	*ft_substr4(char const *s, unsigned int start, size_t len) //más condensada. de github
// {
// 	char	*substr;

// 	if (!s || start >= ft_strlen(s))
// 		return (NULL);
// 	substr = (char *)malloc(sizeof(char) * (len + 1));
// 	if (substr == NULL)
// 		return (NULL);
// 	ft_strlcpy(substr, s + start, len + 1);
// 	return (substr);
// }