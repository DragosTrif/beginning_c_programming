/*Rewrite the functions develeped in the last four programs(10,11,12,13)
to use global variables insted of arguments*/

#include <stdio.h>

int a[4][5] ={
		{1,1,1,1,1},
		{2,2,2,2,2},
		{3,3,3,3,3},
		{4,4,4,4,4}
	};

	int b[5][4] = {
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0}
	};	

		
	

void transposeMatrix(void )
{
	int row, column;


	
	
	

	for( row = 0; row < 4; ++row)
	{
		for( column = 0; column < 5; ++ column)
		{
			b[column][row] = a[row][column];
		}
	}
}	

void displayMatrix( void )	
{
	int row, column;

	for( row = 0; row < 5; ++ row)
	{
		for( column = 0; column < 4; ++ column)
		{
			printf(" %5d",b[row][column]);
		}

		printf("\n");	
			
	}	
}

int main(void)
{
	
	transposeMatrix();
	displayMatrix();

	return 0;

}  