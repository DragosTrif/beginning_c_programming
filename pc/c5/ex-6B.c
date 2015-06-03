#include <stdio.h>
#include <string.h>

int main(void)
{
	int number, flag, count, i, j, n, loopcounter;
	int number1, number2, number3;
	
    char digit[10] = "zero";
    char digit1[10] = "one";
    char digit2[10] = "two";
    char digit3[10] = "there";
	char digit4[10] = "four";
	char digit5[10] = "five";
	char digit6[10] ="six";  
	char digit7[10] = "seven";  
	char digit8[10] = "eight"; 
	char digit9[10] = "nine";
	char first[20] = "12345", second[20], third[20];

	printf("Give me a number\n");
	scanf(" %d", &number);

		while( number != 0)
		{	
			if( number <=9 )
			{
				number1 = number/1;
				printf("%d ", number1);
				flag = 1;
				break;	
				 			
			}	


			

			else if( number <= 99)
			{

				number1 = number/10;

				count = number - number / 10 * 10;

				number2 = (count / 1) ;

				printf(" %d %d", number1, number2);

				flag = 2;
				break;

			
			}

			else if(  number <= 999)
			{
				number1 = number/100;

				count = number - number / 100 * 100;

				number2 = count / 10;

				count  = number2 - number2 / 10 * 10;

				number3 = count  / 1;

				printf(" %d %d %d", number1, number2, number3);

				flag = 3;
				break;
			}
		}
		//for(loopcounter = 0; loopcounter < 1; loopcounter++)	
		
			for(i = 0; i < number1; i++)
			{	
			{
			

				 if(number1 == 1)
				{
					strcpy(first, digit1);
					

				
				}

				else if( number1 == 2)
				{
					strcpy(first, digit2);
					
				
				}

				else if( number1 == 3)
				{
					strcpy(first, digit3);
				
				
				}

				else if( number1 == 4)
				{
					strcpy( first, digit4);
					
				
				}

				else if( number1 == 5)
				{
					strcpy( first, digit5);
					
				
				}

				else if( number1 == 6)
				{
					strcpy(first, digit6);
					
				
				}

				else if( number1 == 7)
				{
					strcpy(first, digit7);
					
				
				}

				else if( number1 == 8)
				{
					strcpy( first, digit8);
					
				}

				else if( number1 == 9)
				{
					strcpy( first, digit9);
					
				
				}
				//break;
			}	


				for(j = 0; j < number2; j++)
				{
					if( number2 == 0)
					{	
						strcpy(second, digit);
						
					
					}

					else if( number2 == 1)
					{
						strcpy( second, digit1);
						
					
					}

					else if( number2 == 2)	
					{
						strcpy( second, digit2);
						
					
					}

					else if( number2 == 3)
					{
						strcpy( second, digit3);
						
					
					}

					else if( number2 == 4)
					{
						strcpy( second, digit4);
					
					
					}

					else if( number2 == 5)
					{
						strcpy( second, digit5);
						
					
					}

					else if( number2 == 6)
					{
						strcpy( second, digit6);
						
					
					}

					else if( number2 == 7)
					{
						strcpy( second, digit7);
						
					
					}

					else if( number2 == 8)
					{
						strcpy( second, digit8);
						
					
					}

					else if ( number2 == 9)
					{
						strcpy( second, digit9);
						
					
					}
					//break;
				}	

			
					for(n = 0; n < number3; n++)
					{
						if(number3 == 0)
						{
							strcpy( third, digit);
						}

						else if( number3 == 1)
						{
							strcpy( third, digit1);
						}

						else if( number3 == 2)
						{
							strcpy( third, digit2);
						}

						else if( number3 == 3)
						{
							strcpy( third, digit3);
						}

						else if( number3 == 4)
						{
							strcpy( third, digit4);
						}

						else if( number3 == 5)
						{
							strcpy( third, digit5);
						}

						else if( number3 == 6)
						{
							strcpy( third, digit6);
						}

						else if( number3 == 7)
						{
							strcpy( third, digit7);
						}

						else if( number3 == 8)
						{
							strcpy( third, digit8 );
						}

						else if( number3 == 9)
						{
							strcpy( third, digit9);
						}
					}	//break;
				}	
											
			
			
		  

			printf(" %s", first);
			printf(" %s", second);
			printf(" %s", third);

			
				
             return 0;
}