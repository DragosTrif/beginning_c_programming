/* Write a program that that accepts to integers values accepts 
at the terminal. Display the result of the divinding first to the second
to there decimal acuuracy.Remeber to have the program ceck for the division with 0 */

#include <stdio.h>

int main(void)
{
	int a, b;
	float result;

	printf("Give me to integers pls\n");
	scanf(" %d  %d", &a, &b);
if( b == 0)
	{
		printf(" This is a special case\n");
	}
else if ( b > 0)
{	
	result = (float) a / b;	
	printf("  is equal with %.3f", result );
}
	

	return 0;
}