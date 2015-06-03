/*Write a program that prints the integers from 1 to 100.
But for multiples of three print "Fizz" instead of the number, and for the multiples of five print "Buzz". 
For numbers which are multiples of both three and five print "FizzBuzz". [1]
FizzBuzz was presented as the lowest level of comprehension required to illustrate adequacy. */

#include <stdio.h>

int main(void)
{
	//int numbers_array[100];
	int i;

	for(i = 3; i < 100; ++i)
	{
		

		if( i % 3 == 0)
		{
			printf("%d = fizz", i);
		}

		 if( i % 5 == 0)
		{
			printf(" %d = buzz", i);
		}

			printf("\n");
	}	


		

		return 0;
			
			
	
}