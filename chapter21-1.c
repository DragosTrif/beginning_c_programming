/* This program creats an array of 10 games scores 
The scores from the first six games are in the program
the scores from the inputed by the palye*/

#include <stdio.h>

int main(void)
{
	int gamesScore[10] = {12, 5, 21, 15, 32, 10};
	int totalPoints = 0;
	int i;
	float avg;

	// only need the last for scores inputed so the loop
	// will cove array elements 6-9;

	for(i=6; i<10; i++)
	{
		//Ad one to the array
		//because the user wont think at first game as nr 0 u shuld use i+1;

		printf("What did the palyer did in the  game #%d\n", i+1);
		scanf(" %d", &gamesScore[i]);
	} 

	//now u have all 10 scores, loop thourgh all 10 scores
	// to get total points in order to calculate an avreage

	for(i=0; i<10; i++)
	{
		totalPoints += gamesScore[i];
	}

	avg = ((float)totalPoints/10);
	printf("\n\nThe players score avg is %.1f.\n", avg);
	return 0;


}