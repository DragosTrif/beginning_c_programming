#include <stdio.h>

int main(void)
{
	int i;

	for( i = 3; i < 100; ++i)
	{
		i = ( i % 3 == 0) ? printf(" %d = fizz", i) :( ( i % 5 == 0) ? printf("%d = buzz", i ) : ) ;

		printf("\n");
	}

	return 0;

}