/* using the variable length array,  rewrite
the transposeMatrix() function developed in ex
12 to take the number of rows and columns as arguments
and to trasnpose a matrix of the specified dimenssions*/

#include <stdio.h>

int transposeMatrix(int n_rows, int n_columns ,int M[n_rows][n_columns], int N[n_rows+1][n_columns-1] )
{
	int row, column;


	
	
	

	for( row = 0; row < n_columns; ++row)
	{
		for( column = 0; column < n_rows; ++ column)
		{
			N[row][column] = M[column][row];
		}
	}
}	

int displayMatrix( int n_rows, int n_column,int M[n_rows][n_column] )	
{
	int row, column;

	for( row = 0; row < n_rows; ++ row)
	{
		for( column = 0; column < n_column; ++ column)
		{
			printf(" %5d",M[row][column]);
		}

		printf("\n");	
			
	}	
}

int main(void)
{
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
	printf("Matrix a is\n");
	displayMatrix(4, 5, a);

	printf("Matrix b is\n");
	displayMatrix(5,4, b);

	printf("Transpose matrix is\n");	
	transposeMatrix(4,5, a, b);
	displayMatrix(5,4,b);

	return 0;

}  