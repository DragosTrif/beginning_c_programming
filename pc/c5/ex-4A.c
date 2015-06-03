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
		if( operator == 'S')
		{
			if( b != 0)
			{	
				a = (float)b;
				printf(" %f\n", (float)b );
			}

			else
			{	
		   		a = (float)a ;
		  		 printf(" %f\n", (float)a );
		  	}	 	 
			
		}

		else if ( operator == '+') 
		{
	
		
		a = a + b;
		printf(" %f\n", (float)a ); 

		}

		else if ( operator == '-')
		{
		
			
			a = a - b;
			printf(" %f\n", (float)a );
			
		}

		else if ( operator == '*')
		{
			a = a*b;
			printf(" %f\n", (float)a );
		}

		else if ( operator == '/')
		{
			if(b == 0)
			{
				printf("not good\n");
			}
			else
			{
				a = a / b;
				printf(" %f\n", (float)a );
			}
		}
		else
		{
			printf("not a valid op\n");
		}
	
		
		scanf( " %d %c", &b, &operator);

	}	
	
	return 0;
	
}