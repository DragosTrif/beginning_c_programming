/*Write a function that raises an integer to a
positive power.Call the function x_to_the_n() taking
two arguments x and n.Have the function reurn a long int
wich represents X^n*/

#include <stdio.h>

unsigned long int x_to_the_n( unsigned long int x , unsigned long int n)
{
	unsigned long int result = 1, i;

	for( i = 0; i < n; ++i)
	{
				
	
		
			result *=  x;
		
		
	}
	

	return result;
}

int main(void)
{
	unsigned long int x_to_the_n( unsigned long int x, unsigned long int n);

	 
	

	printf(" %lu",x_to_the_n(3,23));

	return 0;
}