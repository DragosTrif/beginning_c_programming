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
}