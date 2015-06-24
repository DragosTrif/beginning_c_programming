// Ilustarting pointers

#include <stdio.h>	

int main(void)
{
	int count = 10, x;

	int *int_pointer;

	int_pointer = &count;

	x = *int_pointer;

	printf(" count = %d, x = %d", count, x);

	return 0;
}