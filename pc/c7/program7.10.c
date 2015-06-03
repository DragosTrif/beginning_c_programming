//Revising the function to find the minimum value in an array
#include <stdio.h>

int minimum( int values[], int number_Of_Elements)
{
	int minValue, i;

	minValue = values[0];

	for( i = 0; i < number_Of_Elements; ++i)
	{
		if( values[i] < minValue)
		{
			minValue = values[i];
		}
	}

	return minValue;
}

int main(void)
{
	int array1[5] = {157, -28, -37, 26, 10};

	int array2[7] = {12, 45, 1, 10, 5, 3, 22};

	int minimum( int values[], int number_Of_Elements);

	printf(" array1 minimum is %d\n", minimum (array1, 5));

	printf(" array2 minimum is %d\n", minimum( array2, 7));

	return 0;
}