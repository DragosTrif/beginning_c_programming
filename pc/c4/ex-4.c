/* the factorial of an integer n wirten n!
is the product of the consecitive integeres 1 through 5
5! = 5x4x3x2x1 = 120

write a program to generate and print a table of the first 10  factorials*/


#include <stdio.h>
 
int main()
{
  int factorial, number;
  factorial = 1;

  printf("Table for factorial of 10\n");
  printf("..........................\n");

  for(number = 10; number >= 1; number--)
  {
  	printf("%d\n", number);
  	factorial *= number;
  	printf("%2d............ %d\n",number, factorial);
  }
 return 0;

  

}