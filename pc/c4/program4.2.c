/*This program calculates the 200
triangular number*/

#include <stdio.h>

int main(void)
{
	int triangularNumber, n;

	triangularNumber = 0;

	for(n = 1; n <= 200; n++);
	{
		triangularNumber +=   n;
		printf("The 200th tringular number is %d",  triangularNumber);
	}

	return 0;
}