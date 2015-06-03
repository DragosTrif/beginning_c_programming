/*Modify the sort function developed in program7.12.c
to take a third argument indicating wether the array is to
be sorted in assending or descending order*/


#include <stdio.h>

void sort(int a[], int n, _Bool flag)
{
	int i, j, temp;

	if( flag )
	{
		for( i = 0; i < n - 1; i++)
		{
			for( j = i+1; j < n; j++)
			{
				if( a[i] > a[j])
				{
					 temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}	
	}

	else
	{
		for( i = 0; i < n - 1; i++)
		{
			for( j = i+1; j < n; j++)
			{
				if( a[i] < a[j])
				{
					 temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}	
			
			}	
		}

	}
}


int main(void)
{
	int i;
	int array[16] = { 34,  -5,  6,  0,  12,  100,  56, 22, 44, -3,  -9,  12,  17,  22,  6,  11 };
						 
	void sort(int a[], int n, _Bool flag);
	
	printf("\n\nPrintf the array before the sort\n ");

	for(i = 0; i < 16; i++)
	{
		printf("%d ", array[i] );
	}

	sort(array, 16, 1);

	printf("\n\nPrint the array after the sort\n");

	for(i = 0; i < 16; i++)
	{
		printf("%d ", array[i] );
		
	}
	printf("\n");
	

	return 0;					
}