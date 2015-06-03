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
	

	int b[5][5]={
		{1,0,0,0,0},
		{0,1,0,0,0},
		{0,0,1,0,0},
		{0,0,0,1,0},
		{0,0,0,0,1},
	};

	int row, column, row_c, column_c;

	
		for ( row = 0; row < 5; ++row )
		{
			for (column = 0; column < 5; ++column)
			{
				if  (  row == column && b[row][column] != 1 
					|| row != column && b[row][column] != 0 )
				{
						printf("This is not a unity matrix\n");
						return 0;
				}


			}			
		}
	


	displayMatrix(5,5,b);

	return 0;
		

}