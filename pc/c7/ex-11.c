/* Write a function called arraysum() that thakes two arguments
: an intger array and the number of elements in the array. Have the 
function return as its result the sum of the elements in the array*/

#include <stdio.h>

int arraySum(int array[], int number_Of_Elements)
{


	int i, sum_of_array ;

	for(i = 0; i < number_Of_Elements; i++)
	{
		sum_of_array += array[i];
	}

	return sum_of_array;

}

int main(void)
{
	int arraySum( int array[], int number_Of_Elements);

	int array1[3] = { 100 ,40 ,2};

	

	printf(" %d", arraySum(array1, 3));


	return 0;
}