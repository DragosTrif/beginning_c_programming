/* program to find the 
greates common divisor of two non negative integers*/

#include <stdio.h>

int main(void)
{
	int u, v, temp;

	printf("Printf two non negative integers\n");
	scanf(" %d %d", &u, &v);\

	while(v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;

	}

	printf("The greates common divisor is %d\n", u);
	return 0;

}
