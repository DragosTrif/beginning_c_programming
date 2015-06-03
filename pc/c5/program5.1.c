//Program to calculate the absoulut value of an integer

#include <stdio.h>

int main(void)
{
	int number;

	printf("Type in a number pls:\n");
	scanf(" %d", &number);

	if(number < 0)
	
		number = -number;

		printf("The ablsolute value is %d\n", number);
	
	return 0;
}