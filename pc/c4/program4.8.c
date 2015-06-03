//program to reverse digits

#include <stdio.h>

int main(void)
{
	int number, right_digit;

	printf("Give me a number\n");
	scanf(" %d", &number);

	while(number != 0)
	{
		right_digit = number % 10;
		printf(" %d", right_digit);
		number = number / 10;
	}
	printf("\n");
	return 0;
}