/* Function to sum the elements of an integer array v2 */

#include <stdio.h>

int array_sum(int *array, const int n)
{
	int sum = 0;
	int *const array_end = array + n;

	for( ; array < array_end; ++array)
	{
		sum += *array;
	}

	return sum;
}

int main(void)
{
	int values[10] = {3, 7, -9, 3, 6, -1, 7, 9,1, -5};

	printf("The sum is %d\n", array_sum(values, 10));

	return 0;
}