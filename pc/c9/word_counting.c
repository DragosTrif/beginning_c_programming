/* The countWords() function from program 9.7 and 9.8
incorectly counts a word that contains an aphostrophy
as two words. Modify this funcion to corectly handel 
this situation. Also, extend the founction to count a 
 sequnce of positive or negative numbers, including 
 embeded comma as a single word */
 
 // Function to determine if a chracter is alphabetic
 
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool alphabetic(const char c)
{
	return ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
 
bool numeric(const char c)
{
	printf("numeric |%c|, %d, %d\n", c, c >= '0', c <= '9' );
	return (( c >= '0') && ( c <= '9'));

}

bool specialCharcter( const  char c)
{
     return (c=='\'') || ( c == '.');
}

 
/* Function to count the number of
words in a string*/
 
int countWords(char string[])
{
	int i, wordCount = 0;
 
	bool lookingForWord = true;
	bool alphabetic(const char c);
 
	for( i = 0; string[i] != '\0'; ++i)
	{
		specialCharcter(string[i]);

		printf("i:|%d| char:|%c|, numeric:%d, string:%d \n", i, string[i], numeric(string[i]), alphabetic(string[i]));
		if(alphabetic(string[i]) || specialCharcter(string[i]) || numeric(string[i]) || specialCharcter(string[i]))
		{
			if(lookingForWord)
			{

				printf("found new string word that starts with: %c\n", string[i]);
				++wordCount;
				lookingForWord = false;
			}

			 
			

				
			
		}

		
		else
		{

			lookingForWord = true;
		}

		 
 
 
 
 
	}
 
	return wordCount;
}
 
int main(void)
{
	char text1[] = {"Well here's 1.2 goes."};
	char text2[] = {"And2 here we go...again."};
	//int countWords(const char string[]);
 
	printf("%s - words = %d\n", text1, countWords(text1));
	printf("%s - words = %d\n", text2, countWords(text2));
 
	return 0;
}