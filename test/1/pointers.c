#include <stdio.h>


int main(void)
{
	int A[5] = {5, 8, 9, 6, 10};
	int *p, *q;
	p = A;
	q = &A[3];
	int d = (*q)++;
	printf("el valor %i, la dirección p %p, p++: %p y la q: %p , y la diferencia %li \n", d, p, (p+1), q-1, q - p);
	return (0);
}