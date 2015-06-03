/*Write a function transposeMatrix() that takes an 
argument of 4 x 5 matrix and 5 x 4 matrix. Have the function
transpose the 4 x 5 matrix in to the 5 x 4 matrix.*/

#include <stdio.h>

int transposeMatrix( int matrixM[4][5], int matrixN[5][4])
{
	int row, column;

	for( row = 0; row < 4; ++row)
	{
		for( column = 0; column < 5; ++ column)
		{
			matrixN[column][row] = matrixM[row][column];
		}
	}

	return matrixN;
}

int displayMatrix(int n_rows, int n_cols, int matrix[5][4] )
{
	int row,  col;

	for(row = 0; row < 5; ++ row)
	{
		for( col = 0; col < 4; ++ col)
		{
			printf(" %5d", matrix[row][col]);
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

	transposeMatrix(a,b);
	displayMatrix(5,4, b);
	 

	return 0;
}