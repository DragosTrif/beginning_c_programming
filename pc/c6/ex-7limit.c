#include <stdio.h>

int main(void)
{
	unsigned long i, j;
	int   p[1000000];

	for( i = 0; i < 1000000; i++)
	{
		p[i] = 0;

		//printf(" %d\n", p[10]);
	}

	for(i = 2; i < 1000000; i++)
	{
		
		for( j =i; j*i <= 1000000; j ++ )
		{
			p[j*i] = 1;

			
	
				
				//printf(" %d\n", p[j]);
				
		}
	}	

	for( i = 2; i < 1000000; i++)
	{
		if(p[i] == 0)// scos afara in alt for
		{
			printf(" %d is prime\n", p[i]);
			printf(" %lu", i);
		}
	
	}
	
	return 0;
		  		
}	
