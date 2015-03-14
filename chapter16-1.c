/* This program loops to 10 numbers and prints a message
that varies whether the number is odd or even. It test for odd
 and if the print number is odd. it prints the odd number then 
 starts the next iteration of the loop using continue otherwise
 it prints the even message*/

 #include <stdio.h>

 int main(void)
 {
 	int i;
 	for(i = 1; i < 10; i++)
 	{
 		if(i%2 == 0)
 		{
 			printf(" Im rather odd\n");
 				continue;
 			
 		}
 		printf(" Even up\n");

 	}
 	return 0;
 }
