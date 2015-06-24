// Using pointers to exchange values

#include <stdio.h>

void exchange_values( int  * const pint1, int * const pint2)
{
	int temp;

	temp = *pint1;
	*pint1 = *pint2;
	*pint2 = temp;
}

int main(void)
{
	void exchange_values( int * const pint1, int * const pint2);

	int i1 = -5; int i2 = 66, *p1 = &i1, *p2 = &i2;

	printf(" i1 = %d, i2 = %d", i1, i2);

	exchange_values(p1, p2);
	printf(" i1 = %d, i2 = %d", i1, i2);

	exchange_values(&i1, &i2);
	printf(" i1 = %d, i2 = %d", i1, i2);

	return 0;


}