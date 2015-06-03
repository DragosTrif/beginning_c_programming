// Function to determine if to strings
// are equal.

#include <stdio.h>
#include <stdbool.h>

bool equalStrings( const char s1[], const char s2[])
{
	int i = 0;

	bool areEqual;

	while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		++i;

		if(s1[i] == '\0' && s2[i] == '\0')
		{
			areEqual = true;
		}

		else
		{
			areEqual = false;
		}

		

	}

	return areEqual;
}

int main(void)
{
	bool equalStrings( const char s1[], const char s2[]);

	const char stra[] = {"String compare test"};
	const char strab[] = {"String"};

	printf(" %d\n", equalStrings(stra, strab));

	printf(" %d\n", equalStrings(stra, stra));

	printf(" %d\n", equalStrings(strab, "String"));

	return 0;


}