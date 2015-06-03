/*Rewrite the functions develeped in the last four programs(10,11,12,13)
to use global variables insted of arguments*/

#include <stdio.h>

int length_of_array;
int array_of_elements[64] ;
int i;
int sum_of_array;

void initializeArray(void)
{
	

	printf("Give the length of the array\n");
	scanf(" %d", &length_of_array);
	

	printf("Give the value of the elements\n");
	for(i = 0; i < length_of_array; ++i)
	{
		scanf(" %d\n", &array_of_elements[i]);

	}
}

void arraySum(void)
{


	//int  sum_of_array ;

	for(i = 0; i < length_of_array; ++i)
	{
		sum_of_array += array_of_elements[i];
	}

	
	//return sum_of_array;
}

void dispaly_Array_Sum(void)
{
	printf(" %d", sum_of_array);
}

int main(void)
{
	void initializeArray(void);

	void arraySum(void);
	void dispaly_Array_Sum(void);

	initializeArray();
	arraySum();
	dispaly_Array_Sum();
	

	

	


	return 0;
}