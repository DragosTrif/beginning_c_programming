/* Modify proram6.1.c so that the elements of the array values are set
to 0 
#include <stdio.h>

int main(void)
{
	int values[10];
	int index;

	values[0] = 197;
	values[2] = -100;
	values[5] = 350;
	values[3] = values[0] + values[5];
	values[9] = values[5] / 10;
	--values[2];

	for(index = 0; index < 10; index++)
	{
		printf(" vales[%d] = %d\n", index, values[index]);
	}
	
	
	return 0;
	
	
}*/

#include <stdio.h>

	int main(void)
{
	int values[10];
	int index;

	values[0] = 197;
	values[2] = -100;
	values[5] = 350;
	values[3] = values[0] + values[5];
	values[9] = values[5] / 10;
	--values[2];

	for(index = 0; index < 10; ++index )
	{
		values[index] = values[index] * 0;

		printf(" vales[%d] = %d\n", index, values[index]);
	}

	return 0;
}
