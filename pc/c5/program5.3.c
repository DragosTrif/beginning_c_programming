//program to determine if a number is odd or even

#include <stdio.h>

int main(void)
{
	int number_to_test, reminder;

	printf("Give me a number pls\n");
	scanf(" %d", &number_to_test);

	reminder = number_to_test % 2;

	if(reminder == 0)
	{
		printf("The number %d is even\n", number_to_test);
	} 

	if(reminder != 0)
	{
		printf("The number %d is odd\n", number_to_test);
	}

	return 0;
}