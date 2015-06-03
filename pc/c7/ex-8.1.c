
#include <stdio.h>
 float ecuation_parameters(float a, float b, float c)
 {
 	printf("Give the numbres(in this order a,b, c) pls\n");
 	scanf(" %f", &a);
 	scanf(" %f", &b);
 	scanf(" %f", &c);

 	return a;
 	return b;
 	return c;
 }

int main(void)
{
	int a, b, c;
	printf(" %f %f %f", ecuation_parameters(a, b, c));

	return 0;
}