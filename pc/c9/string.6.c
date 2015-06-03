#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char line[81];

	line[81] = getString();

	printf("%s", line);

	return 0;


}