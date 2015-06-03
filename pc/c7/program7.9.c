// Function to find the minimum value in an array

#include <stdio.h>

int minimum(int values[10])
{
	int minValue, i;

	minValue = values[0];

	for( i = 1; i < 10; ++i)
	{
		if(values[i] < minValue)
		{
			minValue = values[i];
		}
	}

	return minValue;
}

int main(void)
{
	int scores[10], i, minScore;
	int minimum(int values[10]);

	printf("Give me ten scores\n");

	for( i = 1; i < 10; ++i)
	{
		scanf(" %d\n", &scores[i]);
		printf(" %d, %d", scores[i], i);

	}

	minScore = minimum(scores);

	printf("The minimum score is %d\n ", minScore);

	return 0;
}