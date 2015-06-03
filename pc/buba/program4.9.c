//Implementig a reveised program to
// reverse digits

#include <stdio.h>

int main(void)
{
	int number, right_digit;

	printf("Give me a number pls\n");
	scanf(" %d", &number);

	do
	{
		
		{
			right_digit = number % 10;
			printf(" %d", right_digit);
			number = number / 10;
			printf(" %d", number / 10);
		}

		if( number < 0)
		{
			right_digit = -number % -10;
			printf(" %d", -right_digit);
			number = -number / -10;
		}	
	}

	while(number != 0);

	printf("\n");
}