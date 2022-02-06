#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);
char	*ft_split_array(char const *s, char c);
char	*count_words_lett(char const *s, char c);
int		count_strings(char const *s, char c);
char	**ft_split(char const *s, char c);

/* una vez que tenemos el numero de palabras reservar malloc en array (numero de palabras) y depsues un malloc de palabras para cada array*/

int main (void)
{
	char *dest;
	char const *s;
	char c;

	s = "caplebazeraio";
	c = 'p';

	count_strings(s, c);
	count_words_lett(s, c);
	dest = ft_split_array(s, c);
	printf ("este es el array de splts %s\n ", dest);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char **split;

	split = malloc(sizeof(char *) * )
}


char	*ft_split_array(char const *s, char c)
{
	char *dest;
	size_t	nb_array;
	size_t	i;
	

	nb_array = 0;
	i = 0;
	dest = (char *)malloc(sizeof(char) * ft_strlen((char *)s) + 1); 
	if (!dest || !s)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[i];
		if (s[i] == (char)c)
		{
			dest[i] = '\0';
			//printf("array++?\n");
			nb_array++;
		}
		//printf("incrementa?\n");
		//dest++;
		//s++;
		i++;
		//printf("final dest %s, e input %s \n", dest, s);

	}
	//printf("final dest %s, e input %s \n", dest, s);
	if (!(char)c)
		return (dest);// aqui devolvemos el dest apuntando al ultimo elemento '0'
	if (!nb_array)
		return (NULL);
	return (dest);
}



int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*count_words_lett(char const *s, char c)
{
	size_t i;
	size_t nb_words;
	size_t nb_letters;
	
	i = 0;
	nb_words = 0;
	nb_letters = 1;
	while (s[i])
	{
		
		if (s[i] == c)
		{
			printf(" palabra %s se divide con el caracter %c, en Nº :%li palabra con tantas letras: %li\n",s, c, nb_words, nb_letters - 1);
			nb_words++;
			nb_letters = 0;
		}
		i++;
		nb_letters++;
	}
	printf(" ultima opalabra   Nº :%li  con tantas letras: %li\n", nb_words, nb_letters - 1);
	return(NULL);
}


int	count_strings(char const *s, char c)
{
	int	act_pos;
	int	str_count;

	act_pos = 0;
	str_count = 0;
	if (s[act_pos] == c)
		str_count--;
	while (s[act_pos] != '\0')
	{
		if (s[act_pos] == c && s[act_pos + 1] != c && s[act_pos + 1] != '\0')
			str_count++;
		act_pos++;
	}
	str_count++;
	printf("parametro countrstr : %i palabras\n", str_count);
	return (str_count);
}