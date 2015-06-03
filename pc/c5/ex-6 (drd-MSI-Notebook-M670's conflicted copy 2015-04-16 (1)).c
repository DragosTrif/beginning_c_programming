/* Rigth a program that takes an integer keyed in from 
the terminal  extracts and traslates in to english.
so if the the user typeys in 932 it shuld say :
nine three two */

#include <stdio.h>
#include <string.h>

int main(void)
{
	int number,  count, i ;
	int number1, number2, number3;

	char digit[10] = " zero";
	char digit1[10] = "one";
	char digit2[10] = "two";
	char digit3[10] = " there";
	char digit4[10] = " four";
	char digit5[10] = " five";
	char digit6[10] = " six";
	char digit7[10] = "seven";
	char digit8[10] = "eight";
	char digit9[10] = "nine";

    
	char first[250] , second[250], third[250];

	printf("Give me a number\n");
	scanf(" %d", &number);


	do
	{
		if( number <=9 )
			{
				number1 = number/1;
				printf("%d ", number1);
				break;													
									 			
			}


			else if( number == 0)
			{
				number1 = number;
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

				printf("   %d   %d   %d", number1, number2, number3);
					
							
				break;				
			}

		}	

			while( number != 0);


				for(i = 0; i < number1, i < number2, i < number3; i++)
			{		
				
				
				/*printf(" %s", second);
				break;
				printf(" %s", third);
				break;*/

				
				if( number1 == 0)
				
					
					
					{
					 
				 		strcpy(first, digit);

				 		if(number2 == 0)
				 		{
				 			strcpy(second, digit);

				 			if(number3 == 0);
				 			{
				 				strcpy(third, digit);
				 			}
				 		}

					}

					else if(number1 == 1)
					{
					 	strcpy(first, digit1);
					 	printf("%s", first);
					 	if( number2 == 1)
					 	{
					 		strcpy(second, digit1);
					 		printf("%s", second);	
					 		if(number3 == 1)
					 		{
					 			strcpy(third, digit1);
					 			printf("%s", third );	
					 		}
						}
					}	

					else if( number1 == 2)
					{
						strcpy(first, digit2);

						if( number2 == 2)
						{
							strcpy(second, digit2);
							if(number3 == 2)
							{
								strcpy(second, digit2);
							}
						}
						

					}

					else if( number1 == 3)
					{
						strcpy(first, digit3);
						if( number2 == 3)
						{
							strcpy(second, digit3);
							if(number3 == 3)
							{
								strcpy(third, digit3);
							}
						}
					}

					else if( number1 == 4)
					{
						strcpy(first, digit4);

						if(number2 == 4)
						{
							strcpy(second, digit4);

							if(number3 == 4 )
							{
								strcpy(third, digit4);
							}
						}
					}

					else if( number1 == 5)
					{
						strcpy(first, digit5);

						if(number2 == 5)
						{
							strcpy(second, digit5);

							if(number3 == 5)
							{
								strcpy(third, digit5);
							}
						}
					}

					else if(number1 == 6)
					{
						strcpy(first, digit6);

						if(number2 == 6)
						{
							strcpy( second, digit6);

							if(number3 == 6)
							{
								strcpy(third, digit6);
							}
						}
					}

					else if(number1 == 7)
					{
						strcpy(first, digit7);

						if(number2 == 7)
						{
							strcpy(second, digit7);

							if(number3 == 7)
							{
								strcpy(third, digit7);
							}
						}
					}

					else if(number1 == 8)
					{
						strcpy(first, digit8);

						if(number2 == 8)
						{
							strcpy(second, digit8);

							if(number3 == 8)
							{
								strcpy(third, digit8);
							}
						}
					}

					else if(number1 == 9)
					{
						strcpy(first, digit9);

						if(number2 == 9)
						{
							strcpy(second, digit9);

							if(number3 == 9)
							{
								strcpy(third, digit9);
							}
						}
					}
				
					

				

					
								
					
								
						
						
					
					

				}
					
			
			
				
							
												
				

                return 0;

}

	





