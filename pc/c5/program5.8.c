/* Program to evaluate a simple expresion of the 
form number operator*/

#include <stdio.h>

int main(void)
{
	float value1, value2;
	char operator;

	printf("Type in your experesion\n");
	scanf(" %f %c %f", &value1, &operator, &value2);

	if(operator == '+')
	{
		printf(" %.2f", value1 + value2);
	}

	else if(operator == '-' )
	{
		printf(" %.2f", value1 - value2);
	}

	else if(operator == '*' )
	{
		printf(" %.2f", value1 * value2);
	}

	else if(operator == '/')
	{
		printf(" %.2f", value1 / value2);
	}

	return 0;
}