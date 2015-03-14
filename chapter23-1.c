/* This progran generates 10 random numbers and then sorst them*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int ctr, inner, outer, didSwap, temp;
	int nums[10];
	time_t t;

	/* If you dont include this statement 
	your program will always generate the same 
	10 numbers */

	srand(time(&t));

	/* the frist step is to fill the array with
	random numbers from 1 to 100 */

	for(ctr = 0; ctr < 10; ctr++)
	{
		{
			nums[ctr] = (rand() % 99) + 1;
		}

		// list the array beffore sorting
		{
			printf(" #%d\n", nums[ctr]);
		}
	}	

	// sort the array

	for(outer = 0; outer < 9; outer++)
	{
		didSwap = 0; //Becomes 1 (true) if list is not yet ordered

		for(inner = outer; inner < 10; inner++)
			if(nums[inner] < nums[outer])
			{
				temp = nums[inner];
				nums[inner] = nums[outer];
				nums[outer] = temp;
				didSwap = 1;
			}
		if(didSwap = 0)
		{
			break;
		}
	}

	

	/* now list the array as it is after sorting */

	for(ctr = 0; ctr < 10; ctr++)
	{
		printf("#%d", nums[ctr]);
	}
	return 0;
}