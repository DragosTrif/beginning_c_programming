#include <stdio.h>

int main(void)
{
	int p, d;
	_Bool isPrime;


	for(p = 2; p <= 50; p++)
	{
			if( p % 2)
			{	
				isPrime = 1;
			}	

		for( d = 2; d < p; d++)
		{
		
			if( p % d == 0)
				{
					isPrime = 0;
					printf(" %d", p % d);
					break;
				}

		}
					
		if( isPrime != 0)
		{
			printf(" %d", p);	
		}

	}

	
	
					


	return 0;

}