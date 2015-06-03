/* Program to evaluate a simple expresion of the 
form number operator*/

#include <stdio.h>

int main(void)
{
	float value1, value2;
	char operator;

	printf("Type in your experesion\n");
	scanf(" %f %c %f", &value1, &operator, &value2);

	switch(operator)
	{
	case '+':
	{
		printf(" %.2f", value1 + value2);
		break;
	}	
	

	case '-':
		{
		printf(" %.2f", value1 - value2);
		break;
		}

	case '*':
	{
		printf(" %.2f", value1 * value2);
		break;
	}

	case '/':
	{
		if(value2 == 0)
		{
			printf("Division by 0\n");
		}

		else
		{	
			printf(" %.2f", value1 / value2);
		}
		break;	
	}

	default :
		{
			printf("Uknow operator\n");
			break;
		}	
	}	

	return 0;
}