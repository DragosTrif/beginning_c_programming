/* re rewrite program4.4 replacing
for statements with while statements*/

#include <stdio.h>

int main(void)
{
	int n, number, triangularNumber;

	printf("What triagular number do you want\n ");
	scanf("%d", &number);

	triangularNumber = 0;
	n = 0;

	while( n < number)
	{
		n++;
		triangularNumber += n;
	}	
		printf("Triangular number %d is %d", number, triangularNumber);
	
	return 0;
}