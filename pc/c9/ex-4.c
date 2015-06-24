/* Make a function substring() to extract a 
portion of a charcter string.
subtring("charcter", 4, 3, result)
extract 3 charters begining from charter 4, and put the
result in array result*/

#include <stdio.h>
#include <string.h>

char substring(const char string[], int string_start, int string_result, char result[])
{
	int i, j;
	int count;
	char original_string[81];

	


   
   	
	 	for(i = 0; i < string[i]; ++i)
	 	{
	 		if(string_start <= string_result)
	 		{
	 			result[i] = string[i];
	 			printf("%c", result[i]);
	 			
	 		}


	 	}



		 count = i - string_result;

		for(j = string_start; j < count; ++j)
		 {
			result[j] = string[j];
			//printf("%c", result[j]);
		 }
   
	
		 return result[j];
	
}

int main(void)
{
	char word[] = {"two character"};


	//printf("%s", word);
	char result[81];
	int a = 4;
	int b = 3;
	//void substring(char string[], int string_start, int string_result, char result[]);
	


	 substring(  word  , a  ,  b,  result);
	 printf("%s", result);


	return 0;
}


/*int main(void)
{
	int i, j;
	char word[] = {"charcter"};
	char woed[1000];
	char wod[1000];

	for(i = 0; i < 8; ++i)
	{
		//printf("%c", word[i]);

		woed[i] = word[i];
		


		
	}

	for(j =  2; j < 5; ++j)
	{
		woed[i-j] = word[j];
		wod[j] = word[j];

		//printf("%c", woed[i-j]);
		printf("%c", word[j]);
	}

	return 0;
	}*/





	
		
		
		

	
	
