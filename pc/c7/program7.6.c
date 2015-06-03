/*Function to find the greatest comon divisor of
two non negative integeres values and return the result*/

#include <stdio.h>

int great_common_divisor( int u, int v)
{
	int temp;

	while( v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}

	return u;
}

int main(void)
{
	int result;

	result = great_common_divisor(150, 35);
	printf("The great common divisor of 150 and 35 is %d\n", result);

	result = great_common_divisor(1026, 405);
	printf("The great common divisor of 1026 and 405 is %d\n ", result);

	
	printf("The great common divisor of 83 and 240 is %d\n", great_common_divisor(83, 240 ) );

	return 0;
}
