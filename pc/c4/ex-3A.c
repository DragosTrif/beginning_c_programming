/* A triangular number can be generate by the formula 
triangularnumber = n*(n+1)/2. Wite a program to generate a table of
triangular numbers using the formula.Have the program generate every 5th 
triangluar number btwen 1 and 50.(5..10...15....50)*/





#include <stdio.h>

int main(void)
{
	int n, triangular_numbers;
    

    printf("**Table of Tringulars numbers\n\n");
    printf("number...............triangular_numbers");

 for(n = 5; n <= 50; n += 5)
 {
 	triangular_numbers = n*(n + 1) / 2;

 	triangular_numbers += n;

 	
 	printf("\n %2d ....................%d\n\n", n, triangular_numbers);
 }
 
 return 0;
}