//Function to number the characters in a string


#include <stdio.h>


int stringLenght(const char string[])
{
	int count = 0;

	while( string[count] != '\0')
	{
		++count;
	}

	return count;

}

int main(void)
{
	int stringLenght(const char string[]);

	const char word1[] = {'a', 's', 't', 'e', 'r', '\0'};

	const char word2[] = {'a', 't', '\0'};

	const char word3[] = {'a', 'w', 'e', '\0'};

	printf(" %d %d %d\n", stringLenght(word1), stringLenght(word2),
		stringLenght(word3));

	return 0;
}