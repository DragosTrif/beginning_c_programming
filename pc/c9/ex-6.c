/* Write a function called remove_string() to remove a 
specifie number of charcthers from a string the function shuld take 
three arguments : the source string, the starting index number
and the number of charter to be removed. */

#include <stdio.h>
#include <string.h>

void con_cat(char result[], const char s1[], const char s2[])
{
	int i, j;

	for( i = 0; s1[i] != '0'; ++i )
		{
			result[i] = s1[i];
		}


	for( j = 0; s2[j] != '0'; ++j)
	{
		result[i+j] = s2[j];
	}

	result = '\0';

}


void remove_string( char string[], int start_string_position, int no_of_removed_charcaters) 
{
	int i, j, count, k;
	char substrig[81];
	char substring1[81];
	char result[81];
	char null_zero[] = {'\0'};
	

	count = start_string_position + no_of_removed_charcaters;



		for( j = 0; j < start_string_position; ++j)
			{
				if(j != ' ')
				
					substrig[j] = string[j];
					//strcat(substrig, null_zero);
					printf("%c", substrig[j]);
					 
		 
				

			}


			for( i = count; i < strlen(string); ++i)
					{

						if(i != '\0')
						{	
							 substrig[i] = string[i] ;
					
							 printf("%c", substrig[i]);
						}	 

					}

					
						

		


}

int main(void)
{
	void remove_string( char string[], int start_string_position, int no_of_removed_charcaters); 
	char text[81] = {"the wrong son"};

	remove_string(text, 4, 6);

	return 0;
}