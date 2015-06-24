#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, sum;
	char a[] = {"box"};


	for(i = 0; i < strlen(a); ++i)
	{
		sum = (int)a[i];
		printf("%d", sum);
	}

	return 0;

	
	
}
