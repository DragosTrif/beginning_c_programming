//Program to categoraize a single charcter

#include <stdio.h>

int main(void)
{
	char c;

	printf("Enter a single charcter\n");
	scanf(" %c", &c);

	if(( c >='a' && 'c' <= 'z') || ( c >= 'A' && c <= 'Z'))
	{
		printf(" %c is an alphabetical characther\n", c);
	}

	else if((c >= '0' && c <= '9'))
	{
		printf(" %c is a digit\n", c);
	}

	else
	{
		printf(" %c is a special charcther\n", c);
	}
	return 0;
}