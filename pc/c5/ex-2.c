/* Write a program that asks the user for two integer values at
the terminal. Test the two values to see if the first is evenly divisible by 
the scond*/

#include <stdio.h>

int main(void)
{
	int a, b ;

	printf("Give two integer pls\n");
	scanf(" %d %d", &a, &b);

	if( a % b == 0)
	{
		printf("Yupi %d is evenly divisible with %d\n", a, b);
	}

	else if ( a % b != 0 )
	{
		printf(" Ups %d is not evely divisible with %d\n", a, b);
	}

	else if ( b = 0)
	{
		printf("You divided a number to 0\n");
	}

	return 0;
}