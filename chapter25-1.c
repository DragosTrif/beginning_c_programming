/* This program declraes and initializes  an array of
character pointers and the asks for ratings asociated*/

#include <stdio.h>

int main(void)
{
	int i;
	int ctr = 0;
	char ans;

	/* Declaring our array of 9 charcaters and then
	intializing them*/

	char *movies[9] = {"Amour", "Beast of the Southern Wild", "Django Unchained",
						"Les Miserables", "Life of Pi", "Silver linigs palybok",
						"Zero Dark Thirty", "Argo", "Lincon"};
	int movieRatings[9]; // a coresponding array of 9 integers for movie ratings.
	
	char *tempMovies = "This will be used to sort movies";
	int outer, inner, didSwap, tempRattings; // for the sorting loop

	printf("\n\n ***The oscar seson 2015 is here*\n\n**");
	printf("Time to rate the best nominees\n");

	for(i = 0; i < 9; i++)
	{
		printf("Did you see %s movie? Y or N\n", movies[i]);
		scanf(" %c", &ans);

		if((toupper(ans)) == 'Y')
		{
			printf("Whats the rating u gave it?(from 1 to 10)\n ");
			scanf(" %d", &movieRatings[i]);
			ctr++; // movieRatings[i] is used to rate only seen movies
			continue;
		}

			else
			{
				movieRatings[i] = -1;
			}
	}
		//Now sort out the movie ratings

		for(outer = 0; outer < 8; outer++)
		{
			didSwap = 0;

			for(inner = outer; inner < 9; inner++)
				if(movieRatings[inner] > movieRatings[outer])
				{
					tempMovies = movies[inner];
					tempRattings = movieRatings[inner];

					movies[inner] = movies[outer];
					movieRatings[inner] = movieRatings[outer];

					movies[outer] = tempMovies;
					movieRatings[outer] = tempRattings;

					didSwap = 1;
				}
		

			if(didSwap == 0)
			{
				break;
			}

	}
		

	// printf of in order the movies you saw
	printf("\n\n You movie ratings for 2012");
	printf("Contedres\n");

	for(i = 0; i < ctr; i++)
	{
		printf(" %s rated a %d", movies[i], movieRatings[i]);
	}
return 0;
}