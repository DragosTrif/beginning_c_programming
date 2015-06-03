//Function to calculate a triangular number
#include <stdio.h>

void calulateTriangularNumber(int n)
{
	int i, triangular_number = 0;

	for( i = 1; i <= n; ++i)
	{
		triangular_number += i;

		
	}
	printf("Triangular number %d is %d\n ", n, triangular_number);
}

int main(void)
{
	calulateTriangularNumber(10);
	calulateTriangularNumber(20);
	calulateTriangularNumber(50);

	return 0;
}