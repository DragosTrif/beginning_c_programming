// Function to copy a string to an other.

#include <stdio.h>

void copy_string(char *to, char *from)
{
	while(*from)
		{
			*to++ = *from++;
		}

	*to = '\0';	
}

int main(void)
{
	char string1[] = {" A string to be copyed to"};
	char string2[50];

	copy_string(string2, string1);
	printf("%s", string2);

	copy_string(string2, "so is this");
	printf("%s", string2);

	return 0;
}