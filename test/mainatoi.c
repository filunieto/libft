#include <stdlib.h>
#include <stdio.h>
#include "../includes/libft.h"

//int atoi(const char *nptr);
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

int ft_pow(int base, int exp)
{
	int i;
	int res;
	
	
	i = 0;
	res = 1;
	while (i < exp)
	{
		res = base * res;
		i++;
	}
	return (res);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int	leng_nprt;

	i = 0;
	res = 0;
	leng_nprt = ft_strlen((char *)nptr);
	if ('+' == nptr[i] || '-' == nptr[i])
		i++;
	while (nptr[i])
	{
		if ('0' <= nptr[i] && '9' >= nptr[i])
		{
			res = res + ((nptr[i] - '0') * ft_pow(10, (leng_nprt - 1 - i)));
		}
		else
		{
			res = res / ft_pow(10, (leng_nprt - i));
			if (nptr[0] == '-')
				return (-res);
			return (res);
		}
		i++;
	}
	if (nptr[0] == '-')
		return (-res);
	return (res);
}

int main(void)
{
	int res;
	int res_ft;
	//int sum;
	const char *nptr;
	// char *nptr2;

	//sum = 25;

	nptr = "-4578ade";

	res = atoi(nptr);
	res_ft = ft_atoi(nptr);
	printf("%i\n", res_ft);
	printf("debajo función real\n");
	printf("%i\n", res);
	// sum = sum + res;
	// nptr2 = nptr + res;
	return (0);
}