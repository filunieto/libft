#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void putnbr(int nb);
void	ft_putchar(char c);



int main(void)
{
	int i = -981254;
	putnbr(i);
	return 0;
}	

void putnbr(int nb)
{	

	if (nb == -2147483648)
		ft_putstr("-2147483648");
	if (nb < 0)
	{
		nb = -nb;
		write (1 ,"-", 1);
	}
	if (nb > 10)
	{
		putnbr (nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
		ft_putchar(nb + '0');
	ft_putchar('\0');

}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}