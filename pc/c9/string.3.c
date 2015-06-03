#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[] = {"Test "};
	char s2[] = {"works"};

	printf("%s", strcat(s1, s2));

	return 0;
}