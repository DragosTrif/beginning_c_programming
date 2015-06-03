// Using a neested for loop

#include <stdio.h>

int main(void)
{
	int n, number, triangularNumer, counter;

	for(counter = 0; counter < 5; counter++ )
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