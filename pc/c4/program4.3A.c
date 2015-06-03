/* this program generates atable of triangular numbers*/

#include <stdio.h>

int main(void)
{
	int n, triangularNumbers;
	printf("A Tablr of Triagular numbers\n");
	printf(" n Sum from 1 to n\n");
	printf("...  ..........\n");

	triangularNumbers = 0;

	for(n = 1; n<=10; ++n)
	{
		triangularNumbers += n;
		printf("%2d        %d\n", n, triangularNumbers);
	}

	return 0; 
}