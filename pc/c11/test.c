#include <stdio.h>

int main(void)
{
	int a = 5;
	int b = 3;

	a ^= b;
	b ^= a;
	a ^= b;

	printf(" the value of a is %d\n", a);
	printf("the value of b is %d", b);

	return 0;
}