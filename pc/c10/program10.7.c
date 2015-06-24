// Program to traverse a linked list

#include <stdio.h>

int main(void)
{
	struct entery
	{
		int value;
		struct entery *next;
	};

	struct entery n1, n2, n3;
	struct entery *list_pointer = &n1;

	n1.value = 100;
	n1.next = &n2;

	n2.value = 200;
	n2.next = &n3;

	n3.value = 300;
	n3.next = (struct entery*) 0; // Marks the list end with the null pointer

	while( list_pointer != (struct entery*) 0)
	{
		printf("%d\n", list_pointer -> value);
		list_pointer = list_pointer -> next;
	}

	return 0;

}