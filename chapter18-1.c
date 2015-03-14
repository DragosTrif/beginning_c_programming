/* this a demostration of the getchar function */

#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char msg[25];

	printf(" Type up to 25 charcters then pres enter\n");

	for(i=0;i<25; i++)
	{
		msg[i] = getchar(); // outputs a single charcter

		if(msg[i] == '\n');
		{
			i--;
			break;
		}
	}

	putchar('\n'); // one line break after the loop is done

	for(; i >= 0; i--)
	{
		putchar(msg[1]);
	}

	putchar('\n');
	return 0;
}
