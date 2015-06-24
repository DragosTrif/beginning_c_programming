// trying to understend bublle sorting

#include <stdio.h>

int main(void)
{
	int numbers[5] = {6,4,3,2,1};
	int ctr, outer, inner, temp, didSwap;

	for(ctr = 0; ctr < 5; ctr++)
	{
		printf(" %d\n", numbers[ctr]);
	}
	


	for( outer = 0; outer < 4; outer++)
	{
		didSwap = 0;
	for(inner = outer; inner < 5; inner++)
	{
		if(numbers[inner] < numbers[outer])
		{
			 numbers[inner] = ((numbers[inner] + numbers[outer])- numbers[inner]);
			 numbers[outer] = (( numbers[inner] + numbers[outer]) - numbers[inner]);
			
			
			didSwap = 1;
		}
	}

	if(didSwap == 0)
		{
			break;
	
		}
	}	

	for(ctr = 0; ctr < 5; ctr++)
 		{
 			printf("\n\n %d\n", numbers[ctr]);
 		}
	
	
 	
 	return 0;
}