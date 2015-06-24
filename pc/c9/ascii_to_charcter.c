#include <stdio.h>

void ascii_to_charcter(int numbers)
{
	int i; 
	char sum[81];

	for(i = 0; i < numbers; ++i)
	{
		sum[i] = (char)numbers;
	}

	printf("%c", sum);
}

int main(void)
{
	ascii_to_charcter(65);

	return 0;
}