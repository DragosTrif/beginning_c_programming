#include <stdio.h>

int main(void)
{
	int i;

	for( i = 3; i < 100; ++i)
	{
		 printf("%s\n", ( i % 15 == 0) ? "fizzbuzz" : ( i % 5 == 0) ? "buzz" : ( i % 3 == 0) ? "fizz": i);
			 
		
		

		
	}

	

	return 0;

}