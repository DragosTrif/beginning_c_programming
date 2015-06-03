/*Rewrite the functions develeped in the last four programs(10,11,12,13)
to use global variables insted of arguments*/
#include <stdio.h>

int a;

// function to get number

void getNumber( void)
{
	printf("Give me a number to verify for primality\n");
	scanf(" %d", &a);
}

void prime( void)
{
	

	if( a % 2 == 0)
	{
		a = 1;
	}
	else
	{
		a = 0;
	}

	//return a;
}

void displayNumber(void)
{
	

	
	printf(" %d", a );
}

int main(void)
{

    void getNumber( void);
	void prime(void);
	void displayNumber(void);

	getNumber();
	prime();
	displayNumber();

	
	
}