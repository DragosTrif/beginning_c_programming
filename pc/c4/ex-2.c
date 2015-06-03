/* Write a program that generates and displays a table 
of n and n^2 for integers values from 1 to 10.Be ceratin to 
appropiate column headings*/

#include <stdio.h>

int main(void)
{
	int number, number_square;

	printf("number ........ number_square\n");
	printf(".............................\n");

	

	for(number = 1; number <= 10; number++)
	{
		number_square = number*number;
		printf("%2d................%d\n", number, number_square);
	}
	return 0;
}