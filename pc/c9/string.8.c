#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void readLine(char buffer[])
{
	char charcter;
	int i = 0;

	do
	{
		charcter = getchar();
		buffer[i] = charcter;
		++i;
	}

	while(charcter != '\n');


buffer[i-1] = '\0';
}

int countWords(const char string[])
{
	int i, wordCount = 0;
	bool lokingForWord = true;
    

    for( i = 0; string[i] != '\0'; ++i)
    {
    	if(isalpha(string[i]))
    	{
    		if(lokingForWord )
    		{
    			++wordCount;
    			lokingForWord = false;
    		}
    	}

    	else
    	{
    		lokingForWord = true;
    	}
    }

   // printf("%d", wordCount);

    return wordCount;
}

int main(void)
{
	char text[81];
    int totalWords = 0;
    int countWords(const char string[]);
    void readLine(char buffer[]);
    bool alphabetic(const char c);
    bool endOfText = false;

    printf("Type in your text\n");
    printf("When you are done press 'RETURN'\n");

    while( ! endOfText)
    {
    	readLine(text);


    	if(text[0] == '\0')
    	{
    		endOfText = true;
    	}

    	else
    	{
    		totalWords += countWords(text);
    	}
    }

    printf("\n There are %d words in the  above text\n", totalWords);

    return 0;
}