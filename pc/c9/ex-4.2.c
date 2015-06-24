#include <stdio.h>
#include <string.h>

char substring( char string[], int string_start, int string_result, char result[]  )
{
	int i, j, k = 0;
	int count;
	char final_result[81];
	char null_zero[] = {"\0"};


          i = strlen(string);



		 count = string_start + string_result;
 
 
		for(j = string_start ; j < count; ++j, ++k)
		 {
		 	   
		 			
				 result[k] = string[j];
				

			printf("%c", result[k])	 
		 }


		 strcat(result, null_zero);
		 
		 
		 
 
		
	  
 			
		 return result;
}

int main(void)
{
	char word[] = {"character"};
	char result[81];
	int a = 4;
	int b = 3;
	 
	 substring(  word  , a  ,  b,  result);
	 printf("%s\n", result);



	return 0;
}
