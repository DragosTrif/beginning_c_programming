/* Write a function called findString() to determine
if one charcther string exists inside of another string.
The first argument of the function shuld be the charcater
string to be searched and the second argument the string
you are intrested in finding. If the function finds the specified
string have it return the location int the source string
where the string was found. If the function dosent find
the string have it return -1. */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// this is the way
int string_to_ascii(char string[])
{
	int i, sum;

	for(i = 0; i < strlen(string); ++i)
	{
		sum = (int)string[i];
	}

	return sum;
}
//This function is not necesary in this program
bool equal_strings(const char s1[], const char s2[])
{
	int i = 0;
	bool are_equal;

	while( s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		++i;
	if( s1[i] == '\0' && s2[i] == '\0')
	{
		are_equal = true;
	}
	else
	{
		are_equal = false;
	}

	return are_equal;
		

}


int compare_strings( char s1[], char s2[])
{
	int i  , j ;
	int string_start_position, string_end_position;
	char temp_haystack[81];
	char null_zero[] = {"\0"};
	bool found_nedele = 0;
	int haystack_in_ascii, nedele_in_ascii;

	int original_string_length;
	int second_string_length;

	original_string_length = strlen(s1);
	//printf(" %d", original_string_length);
	second_string_length = strlen(s2);

	for( i = 0; i < original_string_length; ++i)
	{
		


		if(s1[i] == s2[0] )
		{
			string_start_position = i;
			printf(" %d", string_start_position);

			for( j = 0;  j < second_string_length ; ++j)
				{
					string_end_position = j;
					
		
					if(s1[string_start_position+string_end_position ] != s2[string_end_position ])
					{	
						break;
					
					}
					else
					{
						found_nedele = 1;
						
					
						temp_haystack[j]   = s1[i+j];
						
					
						
						strcat(temp_haystack, null_zero);
	                    strcat(s2, null_zero);
					}


				}

		printf("\n");

		}
	
	}


	if(found_nedele)
	{
		haystack_in_ascii = string_to_ascii(temp_haystack);
		
		
		nedele_in_ascii = string_to_ascii(s2);
		

		if( haystack_in_ascii == nedele_in_ascii)
		{
			printf("The strings are true\n");
			return  string_start_position;

		}
		else
		{
			printf("ai vrea tu\n");
			return -1;
		}
	}
	

	
	
}	

	



	int main(void)
{
	char haystack[] = {"chaterbox"};
	char nedele[]   = {"hat"};
	

	 compare_strings(haystack, nedele);
	

	
	return 0;
}
