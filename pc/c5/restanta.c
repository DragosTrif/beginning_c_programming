#include <stdio.h>

int main(void)
{
	int original_number, first_nb_extracted, second_nb_exctracted;

	int i, j, count;

	printf("Give me a number\n");
	scanf(" %d", &original_number);

	if(original_number < 9)
	{
		first_nb_extracted = original_number /1;
		printf(" %d", first_nb_extracted);
	}

	else if((original_number > 9) && (original_number < 100))
	{
		first_nb_extracted = original_number/10;
		count = original_number - original_number / 10 * 10;
		second_nb_exctracted = (count / 1);

		printf(" %d %d", first_nb_extracted, second_nb_exctracted);
	}

	for( i = first_nb_extracted; i < first_nb_extracted + 1; ++i)
	{
		if(first_nb_extracted == 0)
		{
			printf(" zero\t");
		}

		else if(first_nb_extracted == 1)
		{
			printf(" one");
		}
		else if(first_nb_extracted == 2)
		{
			printf(" two");
		}
		else if(first_nb_extracted == 3)
		{
			printf("there");
		}
		else if(first_nb_extracted == 4)
		{
			printf("four");
		}
		else if(first_nb_extracted == 5)
		{
			printf("five");
		}
		else if(first_nb_extracted == 6)
		{
			printf("six");
		}
		else if(first_nb_extracted == 7)
		{
			printf("seven");
		}
		else if(first_nb_extracted == 8)
		{
			printf("eight");
		}
		else if(first_nb_extracted == 9)
		{
			printf("nine");
		}

	}


	for(j = second_nb_exctracted; j < second_nb_exctracted + 1; ++j)
	{
		if(second_nb_exctracted == 0)
		{
			printf("zero");
		}

		else if(second_nb_exctracted == 1)
		{
			printf("one");
		}
		else if(second_nb_exctracted == 2)
		{
			printf("two");
		}
		else if(second_nb_exctracted == 3)
		{
			printf("there");
		}
		else if(second_nb_exctracted == 4)
		{
			printf("four");
		}
		else if(second_nb_exctracted == 5)
		{
			printf("five");
		}
		else if(second_nb_exctracted == 6)
		{
			printf("six");
		}
		else if(second_nb_exctracted == 7)
		{
			printf("seven");
		}
		else if(second_nb_exctracted == 8)
		{
			printf("eight");
		}
		else if(second_nb_exctracted == 9)
		{
			printf("nine");
		}
	}


	return 0;



}