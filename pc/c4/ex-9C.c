/* re rewrite program4.4 replacing
for statements with while statements*/


#include <stdio.h>

int main(void)
{
	int n, number, triangularNumer, counter;
	counter = 0;

	while( counter < 5)
	{
		counter++;
		printf("What triangular numbers do you want\n");
		scanf(" %d", &number);

		triangularNumer = 0;

		n = 0;
		while( n < number)
		{
			n++;
			triangularNumer += n;
		}
		printf("The %d triangular number is %d\n", number, triangularNumer);
	}
	return 0;
}