/* Make a function substring() to extract a 
portion of a charcter string.
subtring("charcter", 4, 3, result)
extract 3 charters begining from charter 4, and put the
result in array result*/

#include <stdio.h>
#include <string.h>

void substring( char string[], int string_start_position, int string_end_position, char result[]  )
{
	int i = 0, j = 0, length_of_string = 0;
	int count;
	char null_zero[] = {"\0"};
	
		count = string_start_position + string_end_position;

		length_of_string  = strlen(string);
	
		 	if( count >= length_of_string)
		 	{ 
		 		//printf("%s\n", string);
		 	    
		 	
		 	}
		 	 	
		 
			for(j = string_start_position   ; j < count ; ++j, ++i)
		 	{
		 	   	
				 result[i] = string[j];
					 
			 }
			 

		 	strcat(result, null_zero);
		
}

int main(void)
{
	char word[] = {"two characther"};
	char result[81];
	int a = 4, b = 3 ;	 
	substring(  word  , a  ,  b,  result);
    printf("%s\n", result);
	



	return 0;
}
