#include <stdio.h>

void great_common_divisor(int u, int v)
{
	int temp;

	printf(" The great common divisor of %d and %d is", u, v);

	while( v != 0)
	{
		 temp = u % v;
		 u = v;
		 v = temp;
		

	}

	 printf(" %d\n", u);

}	

int main(void)
{
	great_common_divisor(150, 35);
	great_common_divisor(1026, 405);
	great_common_divisor(83, 240);

	return 0;
}