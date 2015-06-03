//program to reverse digits

#include <stdio.h>

int main(void)
{
	int number, right_digit, count;
	int number1, number2, number3;
	char enghlish, enghlish1;

	printf("Give me a number\n");
	scanf(" %d", &number);

	while( number != 0)
	{
		if( number <= 9)
		{	
			{
				number1 = number/1;
			}

				if(number1 == 1)
				{
					enghlish = " one";
					printf(" %c", enghlish);
					break;
				}

				else if(number1 == 2)
				{
					enghlish = " two";
					printf(" %s", enghlish);
					break;
				}

				else if( number1 == 3)
				{
					enghlish = " three";
					printf(" %s", enghlish);
					break;
				}

				else if( number1 == 4)
				{
					enghlish = "four"
					printf(" %s", four);
					break;
				}

				else if( number1 == 5)
				{
					enghlish = "five";
					printf(" %s", enghlish);
					break;
				}

				else if( number1 == 6)
				{
					enghlish = " six";
					printf(" %s", enghlish);
					break;
				}

				else if( number1 == 7)
				{
					enghlish = " seven";
					printf(" %s", enghlish);
					break;
				}

				else if( number1 == 8)
				{
					enghlish = " eight";
					printf(" %s", enghlish);
					break;
				}

				else
				{
					enghlish = " nine";
					printf(" %s", enghlish);
					break;
				}
		}		
		
		else if(number <= 99)
		{
			{
				number1 = number/10;

				count =number - number / 10 * 10;

				number2 = count / 1;

				printf(" %d %d", number1, number2);
				
				
			

			if(number1 == 1)
				{
					printf(" one");
					break;
				}

				else if(number1 == 2)
				{
					printf(" two");
					break;
				}

				else if( number1 == 3)
				{
					printf(" three");
					break;
				}

				else if( number1 == 4)
				{
					printf(" four");
					break;
				}

				else if( number1 == 5)
				{
					printf(" five");
					break;
				}

				else if( number1 == 6)
				{
					printf(" six");
					break;
				}

				else if( number1 == 7)
				{
					printf(" seven");
					break;
				}

				else if( number1 == 8)
				{
					printf(" eight");
					break;
				}

				else
				{
					printf(" nine");
					break;
				}

			if((number1 == 1) && (number2 == 0))
				{
					enghlish = "one"
					enghlish1 = "zero";
					printf(" %s %s", enghlish, enghlish1);
					break;
				}

				else if( number2 == 1)
				{
					printf(" one\n");
					break;
				}


		}
	}			


		
			
				
	}	
	
return 0;
}