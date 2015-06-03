#include <stdio.h>
#include <string.h>

int main(void)
{
	 char word1[] = {'a', 's', 't', 'e', 'r', '\0'};

	 char word2[] = {'a', 't', '\0'};

	 char word3[] = {'a', 'w', 'e', '\0'};

	printf(" %d %d %d", strlen(word1), strlen(word2), strlen(word3));
	return 0;

}