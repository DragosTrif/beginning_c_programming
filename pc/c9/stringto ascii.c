#include <stdio.h>

int main(void)
{
	int i;
	char a[] = {"boc"};


	while(a[i])
	{
		a[i++];
		printf("%d", a[i++]);
	}

	return 0;
	
}
