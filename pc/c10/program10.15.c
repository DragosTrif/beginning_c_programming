// Functon to count the chracther strings pointer version

#include <stdio.h>

int string_length(const char *string)
{
	const char *cptr = string;

	while(*cptr)
	{
		++cptr;
		
	}

	return cptr-string;
}

int main(void)
{

	int string_length(const char *string);

	printf("%d\n", string_length("string test"));
	printf("%d\n", string_length(""));
	printf("%d\n", string_length("works"));

	return 0;
}
