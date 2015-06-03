/*Rewrite the functions develeped in the last four programs(10,11,12,13)
to use global variables insted of arguments*/

#include <stdio.h>

int array[16] = { 34,  -5,  6,  0,  12,  100,  56, 22, 44, -3,  -9,  12,  17,  22,  6,  11 };
_Bool flag;
 int i;

void order_of_sort(void)
{
	printf("For ascending desceding order press 1\n");
	printf(" for asceding order press 0 \n");
	scanf(" %d", &flag);
}

void sort(void)
{
	int  j, temp;

	if( flag )
	{
		for( i = 0; i < 16 - 1; i++)
		{
			for( j = i+1; j < 16; j++)
			{
				if( array[i] > array[j])
				{
					 temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}
			}
		}	
	}

	else
	{
		for( i = 0; i < 16 - 1; i++)
		{
			for( j = i+1; j < 16; j++)
			{
				if( array[i] < array[j])
				{
					 temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}	
			
			}	
		}

	}
}

void display_array(void)
{
	

	for(i = 0; i < 16; i++)
	{
		printf("%d ", array[i] );
	}
	printf("\n");
}


int main(void)
{
	
	void display_array(void);
	void order_of_sort(void);					 
	void sort(void);
	
	printf("\n\nPrintf the array before the sort\n ");
	display_array();

	

	order_of_sort();

	sort();

	printf("\n\nPrint the array after the sort\n");
	display_array();
	
	

	return 0;					
}