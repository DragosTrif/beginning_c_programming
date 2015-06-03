/* Write a program that acts as a simple calculator.The program shuld 
alow the user to input data in form number operator number.
The following operators shuld pe recognized: +, -, *, /, S, E, .
The S operator tells the program to set the acumulator to the typed in
number. The E operator tells the program that execution is to end.
The artmethic operatioons are performed on the contenst of the acumulator with the number
that was keyed in accting as a smaple operand

program output
10S set Acumulator to 10
= 10.0000
2/ divide by2
= 5.0000*/

#include <stdio.h>

int main(void)
{
	int a, b ;
	a = 0;
	b = 0;
	char operator;

	printf("start computing\n");
	scanf(" %d  %c", &a, &operator);


	while( operator != 'E')
	{
		switch( operator )
		{
			case 'S' :
			{
			   a = (float)a ;
		  	 break;
			
			}

			case '+' :
			{
	
		
			a = a + b; 
			break;
			}

		case '-' :
			{
					
			a = a - b;
			break;
			}


		case '*' :
			{
				a = a*b;
				break;
			}

		case '/' :
			{
				a = a / b;
				break;
			}
		default :
		{
			printf(" not a valid operator\n");

			
		}	
	}


		printf(" %f\n", (float)a );
		
		scanf( " %d %c", &b, &operator);
		{
			if( b == 0)
			{
				printf(" this is a special case\n");
			}
		}

	}	
	
	return 0;
	
}