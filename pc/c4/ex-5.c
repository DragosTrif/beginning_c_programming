// Reform the program to be more reable

#include <stdio.h>

int main(void)
{
	int n, two_to_the_n;

	printf("Table of powers of TWO\n\n ");
	printf("n..............two_to_the_n\n");

	two_to_the_n = 1;

	for(n = 0; n <= 10; n++)
	{
		printf("%2d..............%d\n", n, two_to_the_n);
		two_to_the_n *= 2;
	}

	return 0;
}