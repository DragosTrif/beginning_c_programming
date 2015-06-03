/* Program 6.2 permits only 20 responses to be entered.
Modify the program so that any numbers of responses can 
be entered. So that the user does not have to count the
number of responses in the list, set up the program so that 
the value of 999 can be keyed by the user to indicate the
last response has been entered(hint you can use the break; 
statement to exit your loop)
#include <stdio.h>

int main(void)
{
	int ratingCounters[11], i, response;

	for(i = 1; i <= 10; i++)
	
		ratingCounters[i] = 0;

		printf(" Enter your responses\n");

		for(i = 0; i <= 20; i++)
		{
			scanf(" %d", &response);

			if( response < 1 || response > 10)
			{
				printf(" Bad response: %d\n", response);
			}

			else
			{
				ratingCounters[response] ++;
			}
		}

		printf("\nRatin number of responses");
		printf("***************************\n");

		for(i = 1; i <= 10; i++)
		{
			printf("%4d%4d\n", i, ratingCounters[i]);
		}	
	return 0;
}*/
	#include <stdio.h>

int main(void)
{
	int ratingCounters[11], i, response ;
	int number_of_responses = i;

	for(i = 1; i <= 10; i++)
	
		ratingCounters[i] = 0;

		printf(" Enter your responses\n");

		for(i = 1; i <= number_of_responses; i++)
		{
			scanf(" %d", &response);

			if( response == 999)
			{
				break;
			}
			else if( response < 1 || response > 10)
			{
				printf(" Bad response: %d\n", response);
	
				
			}

			else
			{
				ratingCounters[response] ++;
			}
		}

		printf("\nRating   number of responses");
		printf("\n******************************\n");

		for(i = 1; i <= 10; i++)
		{
			printf("%4d%14d\n", i, ratingCounters[i]);
		}	
	return 0;
}