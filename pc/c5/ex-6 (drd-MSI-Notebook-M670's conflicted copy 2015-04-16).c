/* Rigth a program that takes an integer keyed in from 
the terminal  extracts and traslates in to english.
so if the the user typeys in 932 it shuld say :
nine three two*/

#include <stdio.h>

int main(void)

{
	int number, extraction, count, iner ;
	extraction = 0;

	printf("Give me a number pls\n");
	scanf(" %d", &number);

	while(number != 0)
	{
		extraction = number % 10;
		printf(" %d", extraction);
		number = number / 10;
	}
	printf("\n");

	for( count = 0; count < extraction; count++ )
	{	
		{

			printf(" %d\n", count);		
		}

		/*for(iner = 0; iner < count; iner++)
		{
			printf(" %d", iner);
		}*/
	}	



	return 0;
}