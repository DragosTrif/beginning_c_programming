
#include <stdio.h>
#include <string.h>

char substring( char string[], int string_start, int string_result, char result[] = )
{
	int i, j;
	int count;
	char null_zero[] = {"\0"};


          i = strlen(string);



		 count = i - string_result;

		for(j = string_start; j < count; ++j)
		 {
		 		
				 result[j] = string[j];

		 }

		 strcat(result, null_zero);
		 printf("%d\n", strlen(result));

   
	
		 return result;
	
}

int main(void)
{
	char word[] = {"character"}, result[81];
	int a = 4, b = 2;
	
	 substring(  word  , a  ,  b,  result);
	 printf("%s\n", result);



	return 0;
}
