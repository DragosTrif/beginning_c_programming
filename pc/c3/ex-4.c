/*Write a program that converts
Farenhit to Celsisus using the formula C =(f-32) / 1.8 */

#include <stdio.h>

int main(void)
{
	float f;
	float c ;

	printf("give me a temp pls\n" );
	scanf(" %f", &f);
	printf(" %f farenheit = %f celsius ", f, c = (f-32) / 1.8);

	return 0;

}