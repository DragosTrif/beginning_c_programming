#include <stdio.h>

int main(void)
{
	float a = ( 3.31 * 10e-8 * 2.01 * 10e-7);

	float b = (7.16 *  10e-6 + 2.01 * 10e-8);
	float result = a / b;
	printf("%f", result);
	return 0;
}