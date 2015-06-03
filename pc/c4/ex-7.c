// decimal inside printf,

#include <stdio.h>

int main(void)
{
	int dolars, cents, count;

	for(count = 1; count < 10; count++)
	{
		printf("Enter dollars:");
		scanf(" %d", &dolars );

		printf(" Enter cents:");
		scanf(" %d", &cents);

		printf("$%d.%2d\n\n", dolars, cents);
	}
	return 0;
}
