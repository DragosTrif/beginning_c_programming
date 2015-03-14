/* This program will ask the user how many movies they seen this year
then loop and then loop trough and ask a name and a rating from 1 to 10
for each movie*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    int ctr, numMovies, rating, favRating, leastRating;
    char movieName[40], favorite[40], least[40];
    
    /* intiliaze the favRating to 0 so any movie with any rating of 1 or
    higher wiil replace it and the leastRating to 10 so any movie rate 9 or lower
    will replace it*/
    
    favRating = 0;
    leastRating = 10;
    
    // Find out how many movies the user seen this year
    
    do
    {
        printf("How many movies have you senn this year\n");
        scanf(" %d", &numMovies);
        
        // Checks that the number of movies is greater the 0
    }
    while(numMovies < 1);
    for(ctr = 1; ctr <= numMovies; ctr++)
        {
            printf("What are names of the movies seen\n");
            scanf(" %s", movieName);
            
            printf("u rate it?\n");
            scanf(" %d", &rating);
            
            if(rating > favRating)
            {
                strcpy(favorite, movieName);
                favRating = rating;
            }
            if(rating < leastRating)
            {
                strcpy(least, movieName);
                leastRating = rating;
            }
		}
            printf("Your fav movie was %s ", favorite);
            printf("Your least fav movie was %s", least);
        
    
        return 0;     
}
