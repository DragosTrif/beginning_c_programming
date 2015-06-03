//Program to implement the sign function.

#include <stdio.h>

int main(void)
{
	int number, sign;

	printf("Pls type a number\n");
	scanf(" %d", &number);

	if(number < 0)
	{
		sign = -1;
	}

	else if(number == 0)
	{
		sign = 0;
	}

	else
	{
		sign = 1;
	}

	printf(" %d\n", sign);

	return 0;
}