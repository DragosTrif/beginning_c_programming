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
	int i = 0 , j = 0, count, k = 0;
	int string_start_position, string_end_position;
	char haystack[81];
	char nedele[81];
	char temp_haystack[81];
	char null_zero[] = {"\0"};

	int original_string_length;
	int second_string_length;

	original_string_length = strlen(s1);
	//printf(" %d", original_string_length);
	second_string_length = strlen(s2);

	for( i = 0; i < original_string_length; ++i)
	{
		haystack[i] = s1[i];
		//printf("%c", haystack[i]);

		if(haystack[i] == s2[0] )
		{
			string_start_position = i;
			string_end_position = i + (second_string_length -1 );
			//printf("bingo");
			printf("%d", i);
		}
	
	}

	for( i = 0; i < second_string_length ; ++i)
	{
		nedele[i] = s2[i];
		//printf("%c", nedele[i]);
	}

	count = string_start_position + string_end_position;

	for( j = string_start_position;  j < count ; ++j, ++k)
	{
		if(temp_haystack[k] != '\0')
		{	
		   temp_haystack[k]   = haystack[j];
		   //printf("%c", temp_haystack[k]);
		   printf("%c", haystack[j]);
		   printf("%d", j);
		}  // printf("%d", k);
	}

	strcat(temp_haystack, null_zero);

	//printf("%s\n", nedele);
	//printf("%c\n", temp_haystack[k]);

	if(equal_strings(nedele, temp_haystack))
	{
		return string_start_position;
	}
	else
	{
		return -1;
	}
	
}	

	



	int main(void)
{
	char haystack[] = {"chaterbox"};
	char nedele[]   = {"box"};
	int result;

	result = compare_strings(haystack, nedele);
	printf("%d", result);

	
	return 0;
}

