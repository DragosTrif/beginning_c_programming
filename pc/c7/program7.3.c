#include <stdio.h>

void printMessage(void)
{
	printf("Programing is fun\n");
}

int main(void)
{
	int i;

	for( i = 1; i <= 5; i++)
	{
		printMessage();
	}

	return 0;
}