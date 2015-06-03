//Implementig a reveised program to
// reverse digits.
//This program dosent behave well when a negative int is inputed.
// fix this so -8645 = 5468-

#include <stdio.h>

int main(void)
{
	int number, right_digit;
	_Bool flag = 0;

	printf("Give me a number pls\n");
	scanf(" %d", &number);

	do
	{
		 if(number < 0)
		{
			number = number *(-1);
			flag = 1;	
		}

		right_digit = number % 10;

		number = number / 10;
		printf(" %d", right_digit);	
	}

	while(number != 0);

	

	if(flag)
	{
		printf(" -");
	}
	
	return 0;
	

}