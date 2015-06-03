// Program to convert a positive number in an other base

#include <stdio.h>

int convertedNumber[64];
long int number_to_convert;
int base;
int digit = 0;

void getNumber_and_Base(void)
{
	printf("Number to be convreted \n ");
	scanf(" %ld", &number_to_convert);

	printf("Base?\n");
	scanf(" %d", &base);

	if( base < 2 || base > 16)
	{	
		printf(" bad base must be betwen 2 and 16\n");
		base = 10;
	}		
}

void convertNumber(void)
{
	do
	{
		convertedNumber[digit] = number_to_convert % base;
		++digit;
		number_to_convert /= base;
	}

	while(number_to_convert != 0);
}

void display_Convreted_number(void)
{
	const char baseDigit[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
									 'A', 'B', 'C', 'D', 'E', 'F'};

	int nextDigit;

	printf("Converted number =");

	for(--digit; digit >= 0; --digit )
	{
		nextDigit = convertedNumber[digit];
		printf(" %c", baseDigit[nextDigit]);
	}

	printf("\n");								 

}

int main(void)
{
	void getNumber_and_Base(void), convertNumber(void), display_Convreted_number(void);

	getNumber_and_Base();
	convertNumber();
	display_Convreted_number();

	return 0;
}