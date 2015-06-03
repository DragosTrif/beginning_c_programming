/* You dont need an array to generate Fibonnaci numbers.
You can simply use there variables two to store the previous two
Fibonacci numbers and one to store the curent one. Rewrite program 6.3
so that arrays are not used.Because you are not using arrays u need to
display each Fiobonaci number as you generate it.
// Program to generate the first 15 fibonaci numbers
#include <stdio.h>

int main(void)
{
	int fibonaci[15], i;

	fibonaci[0] = 0;
	fibonaci[1] = 1;

	for(i = 2; i <= 15; i++);

	fibonaci[0] = 0;
	fibonaci[1] = 1;

	for(i = 2; i <= 15; i++)
	{
		fibonaci[i] = fibonaci[i-2] + fibonaci[i-1];
	}

	for(i = 0; i <= 15; i++)
	{
		printf(" %d\n", fibonaci[i]);
	}

	return 0;	
}*/

#include <stdio.h>

int main(void)
{
	int fibonaci_Num1 = 0, fibonaci_Num2 = 1, fibonaci_Num3, i;

	for( i = 2; i <= 5; i++)
	{
		fibonaci_Num3 = fibonaci_Num1 + fibonaci_Num2;
		printf(" %d", fibonaci_Num3);

		fibonaci_Num1 = fibonaci_Num2 + fibonaci_Num3;
		printf(" %d", fibonaci_Num1);

		fibonaci_Num2 = fibonaci_Num1 + fibonaci_Num3;
		printf(" %d", fibonaci_Num2);
	}

	return 0;
}	