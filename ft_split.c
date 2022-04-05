/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieves- <fnieves-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:51:32 by fnieves           #+#    #+#             */
/*   Updated: 2022/04/05 17:51:34 by fnieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
 ** Function count_words (assuming c +=' ')
 ** 2 conditions:
 ** it will add a word when it reaches the end of the string
 **  and the previous character is not a null character (case if s != "")
 ** Or if it reaches the character c and
 ** the preceding character is not the character c
*/

static char	*copy_str(const char *s, unsigned int start, size_t len)
{
	char	*dst;
	int		i;
	size_t	len_s;

	if (!s)
		return (NULL);
	len_s = ft_strlen((const char *)s);
	if (len > len_s)
		len = len_s;
	if (start >= len_s)
		return ((char *)ft_calloc(sizeof(char), 1));
	i = 0 ;
	dst = (char *)malloc((len + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	while (len-- && s[i + (int)start])
	{
		dst[i] = s[i + start];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

static int	count_words(char const *s, char c)
{
	int	words_number;
	int	i;

	i = 0;
	words_number = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			words_number++;
		i++;
	}
	return (words_number);
}

static char	*create_word(char const *s, char c)
{
	int		len;
	char	*word_created;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word_created = (char *)malloc(sizeof(char) * len + 1);
	if (!word_created)
		return (NULL);
	word_created = copy_str(s, 0, len);
	return (word_created);
}

static void	move_pointer(char **array_words, char const *s, char c)
{
	int	i;

	i = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		array_words[i++] = create_word(s, c);
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**array_words;
	int		words;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	words = count_words(s, c);
	array_words = (char **)malloc(sizeof(char *) * words + 1);
	if (!array_words)
		return (NULL);
	array_words[words] = 0;
	move_pointer(array_words, s, c);
	return (array_words);
}

#include <stdio.h>
int main (void)
{
	char const *s;
	char  **array_words;
	char c;
	int	i;

	s = "        di jwf woifwd                ";
	c = ' ';
	array_words = ft_split(s, c);
	for (i = 0; i < count_words(s, c); i++)
		printf("arrray %i : %s \n", i, array_words[i]);

	return (0);
}
