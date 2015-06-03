/* Write that calculates an avereage of an
array of an array of 10 floating points values*/

#include <stdio.h>

int main(void)
{
	float array[10], avereage = 0, sum = 0;
	int i;

	printf("Give the numbers of the array\n");

	for(i = 0; i < 10; i++)
	{
		scanf(" %f", &array[i]);
		
		
	

		sum = sum + array[i];
		printf("  %f+", sum);

	}


	
		
	
	avereage  = sum / i;
	


	printf("The avreage of the arrays is  %.2f", avereage);

	return 0;
}