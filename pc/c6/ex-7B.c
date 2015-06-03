#include <stdio.h>

int main(void)
{
	int i, j;
	int   p[10];

	for( i = 0; i < 10; i++)
	{
		p[i] = 0;

		//printf(" %d\n", p[10]);
	}

	for(i = 2; i < 10; i++)
	{
		
		for( j =i; j*i <= 10; j ++ )
		{
			p[j*i] = 1;

			
	
				
				//printf(" %d\n", p[j]);
				
		}
	}	

	for( i = 2; i < 10; i++)
	{
		if(p[i] == 0)// scos afara in alt for
		{
			printf(" %d is prime\n", p[i]);
			printf(" %d", i);
		}
	
	}
	
	return 0;
		  		
}	
