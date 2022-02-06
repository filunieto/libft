#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t count_cipher_recurs(int n);
size_t count_cipher(int n);
char	*ft_itoa(int n);
int	power(int base, int exp);
char *str_numb(int n, char *number, int cipher);

/* demasiado larga: revisar en https://github.com/Mitsu325/libft/blob/main/ft_itoa.c*/

int main(void)
{
	int	cipher = 0;
	char *numero;

	numero = ft_itoa(cipher);
	printf ("str de cifras %s de numero %i\n",numero,  cipher);
	return (0);
}

char	*ft_itoa(int n)
{
	char	*number;
	int		sign;
	size_t	cipher;

	cipher = count_cipher(n);
	sign = 0;
	number = (char *)malloc(sizeof(char) * cipher + 1 + 1);
	if (!n)
		return ("0");
	if (n < 0)
	{
		n = -n;
		*number = '-';
		number++;
		sign = 1;
	}
	number = str_numb(n, number, cipher);
	return (number - sign);
}

char *str_numb(int n, char *number, int cipher)
{
	int	i;

	i = 0;
	while (n)
	{
		number[i] = n / power(10, cipher - i - 1) + '0';
		n = n - n / power(10, cipher - i - 1) * power(10, cipher - i - 1);
		i++;
	}
	number[i] = '\0';
	return (number);
}

size_t count_cipher(int n)
{
	size_t cipher;

	cipher = 0;
	if (!n)	
		return (1);
	if (n < 0)
		n = -n;
	while (n)
	{
		n = n / 10;
		cipher++;
	}
	return (cipher);
}



size_t count_cipher_recurs(int n)
{
	size_t	cipher;
	
	cipher = 0;
	if (!n)
		return (1);
	if (n < 0)
		n = -n;
	while (n >= 10)
	{
		cipher++;
		n = n / 10;
		count_cipher (n);
	}
	cipher++;
	return (cipher);
}


int	power(int base, int exp)
{
	int	res;
	
	res = 1;
	while (exp > 0)
	{
		res = base * res;
		exp--;
	}
	return (res);
}

