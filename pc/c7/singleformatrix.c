#include <stdio.h>
int main(){
	int a[5][5] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20},
		{21,22,23,24,25}
	};

	int b[25] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
	int count, row, col;

	for (row = 0; row < 5; ++row)
	{
		for(col = 0; col < 5; ++col)
		{
			printf("%3d", b[ 5 * row + col ] );
		};
		printf("\n");
	}
	/*
	for(count = 0; count < 25; count++)
	{
		if( count % 5 == 0 )
		{
			printf("\n");
		}
		printf("%3d", b[count]);

	};
	*/

}