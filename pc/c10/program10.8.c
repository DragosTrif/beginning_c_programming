// Program to ilustrate using pointers and  functions

#include <stdio.h>

void test(int *int_pointer)
{
	*int_pointer = 100;
}

int main(void)
{
	void test(int *int_pointer);
	int i = 50, *p = &i;

	printf("Before the call to test i = %d\n", i);

	test(p);

	printf("After the call to test i = %d\n", i);

	return 0;	
}