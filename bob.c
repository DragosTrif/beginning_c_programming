#include <stdio.h>

int main(void)
{
	char name[25];
	char name1;
	char name2;

	printf("Give me name pls\n");
	scanf(" %c\n", &name[25]);

	switch('name[25]') 
	{
		case ('B'):
		printf(" Hello %c \n", name);
		case ('o'):
		printf(" Hello %c \n", name);
		case ('b'):
		printf(" Hello %c \n", name);
		break;

		case ('A'):
		case ('l'):
		printf(" hello %s\n", name);
		break;

		default:
		printf(" %c You are not logeed in the system", name);
		break;

		return 0;
	}
}
