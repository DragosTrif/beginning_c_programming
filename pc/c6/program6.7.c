//Program to convert a positive integer to an other base

#include <stdio.h>

int main(void)
{
	const char baseDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
									'A', 'B', 'C', 'D', 'E', 'F'};

	int convertedNumber[64];

	long int number_to_convert;

	int nextDigit, base, index = 0;

	// get the number and the base

	printf("Number to convert?\n");
	scanf(" %ld", &number_to_convert);

	printf("Base\n");
	scanf(" %d", &base);

	// convert to indicated base

	do
		{
			convertedNumber[index] = number_to_convert % base;
			++index;

			number_to_convert = number_to_convert / base;

		} 

	while(number_to_convert != 0);

	// display the results in reverse order

	printf("Conveted number =");

	for(--index; index >= 0; --index)
	{
		nextDigit = convertedNumber[index];
		printf(" %c", baseDigits[nextDigit]);
	}

	printf("\n");
	return 0;	
}