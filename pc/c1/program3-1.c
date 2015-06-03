#include <stdio.h>

int main(void)
{
	int integVar = 100;
	float floatintVar = 331.71;
	double doubleVar = 8.44e+11;
	char charVar = 'W';
	_Bool boolVar = 0;

	printf("integVar = %d\n", integVar);
	printf("floatintVar = %f\n", floatintVar);
	printf("doubleVar = %e\n", doubleVar);
	printf("doubleVar = %g\n", doubleVar);
	printf("charVar = %c\n", charVar);
	printf("boolVar = %d\n", boolVar);

	return 0;

}