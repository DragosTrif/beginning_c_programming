/* Write a function that returns a 1 if its arfument is prime 
 and returns a priem otherwise*/

 #include <stdio.h>

int prime(int a)
{
	

	if( a % 2 == 0)
	{
		a = 1;
	}
	else
	{
		a = 0;
	}

	return a;
}

int main(void)
{
	int prime(int a);

	
	printf(" %d", prime(7));
}