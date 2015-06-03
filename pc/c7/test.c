#include <stdio.h>

int main(void)
{
	int resutlt;
	int a = 1;

	resutlt = a++*++a;
	//printf("%d", a++);
	//printf("%d", ++a);


	printf("%d", resutlt);

	return 0;
}