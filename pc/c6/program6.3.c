// Program to generate the first 15 fibonaci numbers
#include <stdio.h>

int main(void)
{
	int fibonaci[15], i;

	fibonaci[0] = 0;
	fibonaci[1] = 1;

	for(i = 2; i <= 15; i++);

	fibonaci[0] = 0;
	fibonaci[1] = 1;

	for(i = 2; i <= 15; i++)
	{
		fibonaci[i] = fibonaci[i-2] + fibonaci[i-1];
	}

	for(i = 0; i <= 15; i++)
	{
		printf(" %d\n", fibonaci[i]);
	}

	return 0;	
}