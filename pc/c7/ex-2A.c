//Function to calculate a triangular number
#include <stdio.h>

int calulateTriangularNumber(int n)
{
	int i, triangular_number = 0;

	for( i = 1; i <= n; ++i)
	{
		triangular_number += i;

		
	}
	//printf("Triangular number %d is %d\n ", n, triangular_number);

	return triangular_number;
}

int main(void)
{
	int result, number, i;
	int calulateTriangularNumber(int n);

	for(i = 0; i <= 5; i++)
	{
		printf("Give me the triangular numbers\n");
		scanf(" %d", &number);
		result = calulateTriangularNumber(number);

		printf("The triangular number of %d id %d\n", number, result);
	}

	return 0;
}