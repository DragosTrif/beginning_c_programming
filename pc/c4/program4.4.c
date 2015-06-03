/* Asking for user input*/

#include <stdio.h>

int main(void)
{
	int n, number, triangularNumber;

	printf("What triagular number do you want\n ");
	scanf("%d", &number);

	triangularNumber = 0;

	for(n = 1; n <= number; n++)
	{
		triangularNumber += n;
	}	
		printf("Triangular number %d is %d", number, triangularNumber);
	
	return 0;
}