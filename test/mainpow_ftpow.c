#include <stdio.h>

double ft_pow_exp_neg(double base, double exp) //con exp negativo algo falla = 0; quiza necesita un float
{
	double i;
	double res;

	i = 0;
	res = 1;
	if (exp < 0)
	{
		while (i > exp)
		{
			res = res / base;
			printf("resultado: ");
			i--;	
		}
		return (res);
	}
	else
	{
		while (i < exp)
		{
			res = base * res;
			i++;
		}
	}
	return (res);
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


int main(void)
{
	int base = 10;
	int exp = 0;
	int res;
	res = ft_pow(base,exp);
	printf("resultado: %i\n", res);
	return 0;
}