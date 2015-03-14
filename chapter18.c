/* demostration of the putchar function*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char msg[] = "C is fun";

	for(i=0;i < strlen(msg); i++)
	{
		putchar(msg[i]); // outputs a single chartcter
	}
	putchar('\n'); // One line break after the loop is done
	return 0;
}
