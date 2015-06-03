#include <stdio.h>
#include <stdbool.h>



int main(void)
{
	int original_number, first_nb_extracted, second_nb_exctracted;
	void number_in_english(int d);
	int  count;
	

	printf("Give me a number\n");
	scanf(" %d", &original_number);

	if(original_number < 9)
	{
		first_nb_extracted = original_number /1;
		
		printf(" %d", first_nb_extracted);
		number_in_english(first_nb_extracted);
	}

	else if((original_number > 9) && (original_number < 100))
	{
		first_nb_extracted = original_number/10;
		count = original_number - original_number / 10 * 10;
		second_nb_exctracted = (count / 1);
		

		printf("\n %d %d", first_nb_extracted, second_nb_exctracted);
		number_in_english(first_nb_extracted);
		number_in_english(second_nb_exctracted);
	}

	

	return 0;

}

void number_in_english(int d)
{
	


		if(d == 0)
		{
			printf("zero\t");
		}

		else if(d == 1)
		{
			printf("one\t");
		}
		else if(d == 2)
		{
			printf("two");
		}
		else if(d == 3)
		{
			printf("there");
		}
		else if(d == 4)
		{
			printf("four");
		}
		else if(d == 5)
		{
			printf("five");
		}
		else if(d == 6)
		{
			printf("six");
		}
		else if(d == 7)
		{
			printf("seven");
		}
		else if(d == 8)
		{
			printf("eight");
		}
		else if(d == 9)
		{
			printf("nine");
		}



}	
