/*  This program fills three arrays with the player total points
rebounds and asists.It loops through the scoring array and finds 
the game with the most points.once it knows that it prints  the 
total from all three categories from that game*/

#include <stdio.h>

int main(void)
{
	int gameScores[10] = {12, 5, 21, 15, 32, 10, 6, 31, 11, 10};
	int gameRebounds[10] = {5, 7, 1, 5, 10, 3, 0, 7, 6, 4};
	int gameAsissts[10] = {2, 9, 4, 3, 6, 1, 11, 6, 9, 10};
	int bestGame = 0; // The comparason variable for best scoring
	int gmMark = 0; // This will mark wick game is best scoring game
	int i;

	for(i = 0; i < 10; i++);
		// if loop will compare each game with the curent best total
		//if the curent score is higher it becomes the best
		//and the counter variable becomes the flag(gmMark)
	{
		if(gameScores[i] > bestGame)
		{
			bestGame = gameScores[i];
			gmMark = i;
		}
	}

	//Print out details of the best scoring games
	//Because arrays start at 0 add 1

	printf("\n\n*** The players best scoring game totals:\n");
	printf("The best game was #%d\n", bestGame+1);
	printf("Scored #%d points\n", gameScores[gmMark]);
	printf("Grabbed #%d rebounds\n ", gameRebounds[gmMark]);
	printf("Dished #%d assits", gameAsissts[gmMark]);
	  return 0;
}