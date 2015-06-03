#include <stdio.h>

int main(void)
{
	unsigned long  int i, j, size_of_array;
    unsigned long long  p[size_of_array];

	printf("Give a pos int");
	scanf(" %lu", &size_of_array);
	printf(" %lu", size_of_array);

	for( i = 0; i < size_of_array; i++)
	{
		printf(" %lu for 1\n", size_of_array);
		p[i] = 0;
		printf(" %lu %llu %lu for 1.1\n", size_of_array, p[i], i);

	}

	for(i = 2; i < size_of_array; i++)
	{
		printf(" %lu for outer\n", size_of_array);
		printf(" %lu for outer\n", i);
		
		for( j =i; j*i <= size_of_array; j ++ )
		{
			printf(" %lu for inner\n", size_of_array);
			printf(" %lu %lu %lu\n", i, j, i*j);
			p[j*i] = 1;

			
	
				
				
				
		}
	}	

	for( i = 2; i < size_of_array; i++)
	{
		if(p[i] == 0)// scos afara in alt for
		{
			//printf(" %d is prime\n", p[i]);
			//printf(" %d", i);
		}
	
	}
	
	return 0;
		  		
}	

	


