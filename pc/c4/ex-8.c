/*Modify program 4.5 so that the user can type
the numbers of triangulars numbers to calculatetd*/

#include <stdio.h>

int main(void)
{
	int n, number, triangularNumer, counter;
	int numbers_of_numbers;

	printf("enter the number of triangulars numbers to calculate\n");
	scanf(" %d", &numbers_of_numbers);

	for(counter = 0; counter < numbers_of_numbers; counter++ )
	{
		printf("What triangular numbers do you want\n");
		scanf(" %d", &number);

		triangularNumer = 0;

		for(n = 1; n <= number; n++)
		{
			triangularNumer += n;
		}
		printf("The %d triangular number is %d\n", number, triangularNumer);
	}
	return 0;
}