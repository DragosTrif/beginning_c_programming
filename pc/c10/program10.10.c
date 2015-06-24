// Retturnig a pointer from a function


struct entery
{
	int value;
	struct entery *next;
};

struct entery *find_entery(struct entery *list_ptr, int match)
{
	while( list_ptr != (struct entery*) 0)
	{
		if( list_ptr-> value == match)
		{
			return list_ptr;
		}
		else
		{
			list_ptr = list_ptr -> next;
		}

		
	}

	return (struct entery*) 0;
}

int main(void)
{
	struct entery *find_entery(struct entery *list_ptr, int match);
	struct entery n1, n2, n3;
	struct entery *list_ptr, *list_start = &n1;

	int search;

	n1.value = 100;
	n1.next = &n2;

	n2.value = 200;
	n2.next = &n3;

	n3.value = 300;
	n3.next = 0;


	printf("Enter a value to locate:");
	scanf("%d", &search);

	list_ptr = find_entery(list_start, search);

	if( list_ptr != (struct entery*)0)
	{
		printf("Found %d\n", list_ptr -> value);
	}
	else
	{
		printf("Not found");
	}

	return 0;


}