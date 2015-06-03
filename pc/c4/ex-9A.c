/* re rewrite program4.3 replacing
for statements with while statements*/


#include <stdio.h>

int main(void)
{
	int n, triangularNumbers;
	printf("A Table of Triagular numbers\n");
	printf(" n Sum from 1 to n\n");
	printf("...  ..........\n");

	triangularNumbers = 0;
	n = 0;

	while( n < 10)
	{	
		++n;
		triangularNumbers += n;
		printf("%2d        %d\n", n, triangularNumbers);
	}

	return 0; 
}