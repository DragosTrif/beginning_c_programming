// Pointer versions of strings

#include <stdio.h>

void copy_string( char *to, char *from)
{
	for( ; *from != '\0'; ++from, ++to)
	{
		*to = *from;
		
	}
	*to = '\0';
	
}

int main(void)
{
	void copy_string( char *to, char *from);

	char string1[] = {" A string to be copyed to"};
	char string2[50];

	copy_string(string2, string1);
	printf("%s", string2);

	copy_string(string2, "so is this");
	printf("%s", string2);

	return 0;
}