#include <stdio.h>

int displayMatrix( int n_rows, int n_column,int M[n_rows][n_column] )	
{
	int row, column;

	for( row = 0; row < n_rows; ++row)
	{
		for( column = 0; column < n_column; ++column)
		{
			printf(" %5d",M[row][column]);
		}

		printf("\n");	
			
	}	
}

int main(void)
{
	int c[5][5]={
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0}
	};


	int a[5][5] ={
		{1,1,1,1,1},
		{2,2,2,2,2},
		{3,3,3,3,3},
		{4,4,4,4,4},
		{5,5,5,5,5}
	};

	/*int b[5][5] = {
		{1,2,3,4,1},
		{1,2,3,4,1},
		{1,2,3,4,1},
		{1,2,3,4,1},
		{1,2,3,4,1}
	};*/

	int b[5][5]={
		{1,0,0,0,0},
		{0,1,0,0,0},
		{0,0,1,0,0},
		{0,0,0,1,0},
		{0,0,0,0,1},
	};

	int row, column, row_c, column_c;

	for (row_c = 0; row_c < 5; ++row_c)
	{
		for ( column_c = 0; column_c < 5; ++column_c)
		{
			for (row = 0; row < 5; ++row)
			{
				//for ( column = 0; column < 5; ++column)
				{
					c[row_c][column_c] += a[row_c][row] * b[row][column_c];

				}

			}			
		}
	}


	displayMatrix(5,5,c);

	return 0;
		

}