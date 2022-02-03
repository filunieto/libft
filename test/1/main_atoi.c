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
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32) && nptr[i])
	{
		i++;
	}
	if ('+' == nptr[i] || '-' == nptr[i])
	{
		if ('-' == nptr[i])
			sign = -1;
		i++;
	}
	while ('0' <= nptr[i] && '9' >= nptr[i])
	{
		res = res * 10 + ((nptr[i] - '0'));
		i++;
	}
	return (sign * (res));
}



int main(void)
{
	int res;
	int res_ft;
	//int sum;
	const char *nptr;
	// char *nptr2;
	int i = 0;
	//sum = 25;
	char *pruebas[] = {"000074", "--4886", "546:5", "-2147483648","+-54", "-+48",
	"\t\n\r\v\f  469 \n" , //este no va
	"\n\n\n  -46\b9 \n5d6", //este no va
	"", "\t\n\r\v\fd479 \n"};
	while (pruebas[i])
	{
		nptr = pruebas[i];
		res = atoi(nptr);
		res_ft = ft_atoi(nptr);
		printf("----para: %s -----\nMi resultado es: ", nptr);
		printf("%i\n", res_ft);
		printf("De función real: ");
		printf("%i\n", res);
		printf("-------------\n");
		i++;
	}
	return (0);
}


// abajo mi función. Demasiada redundancia con while e if , por eso demasiado larga
// int	ft_atoi(const char *nptr)
// {
// 	int	i;
// 	int	res;
// 	int	leng_nprt;
// 	int index_sig;

// 	i = 0;
// 	res = 0;
// 	leng_nprt = ft_strlen((char *)nptr);
// 	while (nptr[i] == '0' || nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\r' || nptr[i] == '\v' || nptr[i] == '\f')
// 	{
// 		i++;
// 	}
// 	if ('+' == nptr[i] || '-' == nptr[i])
// 	{
// 		index_sig = i;
// 		i++;		
// 	}
// 	while (nptr[i])
// 	{
// 		if ('0' <= nptr[i] && '9' >= nptr[i])
// 		{
// 			res = res + ((nptr[i] - '0') * ft_pow(10, (leng_nprt - 1 - i)));
// 		}
// 		else
// 		{
// 			if (nptr[index_sig] == '-')
// 				return (-(res / ft_pow(10, (leng_nprt - i))));
// 			return (res / ft_pow(10, (leng_nprt - i)));
// 		}
// 		i++;
// 	}
// 	if (nptr[index_sig] == '-')
// 		return (-res);
// 	return (res);
// }