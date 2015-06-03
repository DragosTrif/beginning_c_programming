#include <stdio.h>
#include <string.h>

int main(void)
{
	int number, flag, count, i, j, n ;
	int number1, number2, number3;
	
    char digit[6] = "zero";
    char digit1[6] = "one";
    char digit2[6] = "two";
    char digit3[6] = "there";
	char digit4[6] = "four";
	char digit5[6] = "five";
	char digit6[6] ="six";  
	char digit7[6] = "seven";  
	char digit8[6] = "eight"; 
	char digit9[6] = "nine";
	char first[150] , second[150], third[150];

	printf("Give me a number\n");
	scanf(" %d", &number);

	do

{	
			if( number <= 9 )
			{
				number1 = number/1;
				printf("%d ", number1);
				
				break;	
						
				
				 			
			}	


			

			else if( number <= 99)
			{

				number1 = number/10;

				count = number - number / 10 * 10;

				number2 = (count / 1) ;

				printf(" %d %d", number1, number2);

				
				break;

			
			}

			else if(  number <= 999)
			{
				number1 = number/100;

				count = number - number / 100 * 100;

				number2 = count / 10;

				count  = number - number / 10 * 10;

				number3 = count  / 1;

				printf(" %d %d %d", number1, number2, number3);

				
				break;
			}
		}
       while(number != 0);

			for(i = 0, j = 0, n = 0; i < number1, j < number2, n < number3; i++, j++, n++)
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
				//continue;
				


				
				
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
					//continue;

			
					
					
					/* if(number3 == 0)
						{
							strcpy( third, digit);
							
						}*/

						 if( number3 == 1)
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
						//break;
				}	
											
			
			
		  

			printf(" %s", first);
			printf(" %s", second);
			printf(" %s", third);
			//printf(" %s %d %d", first, sizeof(first), strlen(first));

			//if(number = 0)
			//{
			//	strcpy(first, digit);
			//	printf("%s", first);
			//}

			
				
             return 0;
}		