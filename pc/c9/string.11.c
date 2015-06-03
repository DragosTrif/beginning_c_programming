#include <stdio.h>
#include <string.h>

int main(void)
{
	 char string[] = {"dia"};
	 int val;

	printf(" %d\n", atoi("245"));
	printf(" %d\n", atoi("100") + 25);
	printf(" %d\n", atoi("13*5"));

    val = atoi(string);
	printf(" %d\n", val );
	

	return 0;
}