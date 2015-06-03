// Program to generate a table of prime numbers
/* This program has several ineficiesies.One results from cheching even 
numbers-Skip all even numbers
The inner for loop is also ineficent beacuse the value of p is always divide by the 
value of  d form 2 trough p-1.This inefincy could be avoidid adding a test for the value of isPrime in the
conditions of the for loop.In this manner the for loop could be set up to continue
as long as no divisor was found and the value of d was les then p*/

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
				isPrime = 0;
		}
					
		if( isPrime != 0)
		{
			printf(" %d", p);	
		}

	}

	
	
					


	return 0;

}