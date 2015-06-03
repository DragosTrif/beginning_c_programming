// Function to convert a string to a integer

#include <stdio.h>

int strToInt( const char string[])
{
	int i, intValue, result = 0;

	for( i = 0; string[i] >= '0' && string[i] <= '9'; ++i)
	{
		intValue = string[i] - '0';
		result = result * 10 + intValue;
	}

	return result;
}

int main(void)
{
	int strToInt( const char string[]);

	printf(" %d\n", strToInt("245"));
	printf(" %d\n", strToInt("100") + 25);
	printf(" %d\n", strToInt("13*5"));
	

	return 0;
}