/* Right a program that calculates the sum
of the digitits of an integer.example 2155 = 2+1+5+5=13*/


#include <stdio.h>

int main(void)
{
	int number, sum ;
	sum = 0;

	printf("Give me a number\n");
	scanf(" %d", &number);

	do
	{
		sum += number % 10;
		
		
		number = number  / 10;
	}
	while(number > 0);
	{
		printf("%d", sum);
	}
	return 0;
}