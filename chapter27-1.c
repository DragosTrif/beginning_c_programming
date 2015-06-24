/* This program gets the book info structure
by including chapter27-A and asks the users
to fill in the three structures and then prints them*/

#include "chapter27-A.h"
#include <stdio.h>

int main(void)
{
	int ctr;
	struct bookInfo books[3]; //Array of there structures variabeles

	// Gets information about each book from the user;

	for(ctr = 0; ctr < 3; ctr++)
	{
		printf("What is the name of the book #%d?\n", (ctr+1));
		gets(books[ctr].title);
		puts("Who is the author ?");
		gets(books[ctr].author);

		puts("How much did the book cost?");
		scanf(" %f", &books[ctr].price);

		puts("How many pages in the book?");
		scanf(" %d", &books[ctr].pages);
		getchar(); //clears last new line for the next loop
	}

	//Print a heder line and loop through ad print the info

	printf("Here is the colection of books\n");

	for(ctr = 0; ctr < 3; ctr++)
	{
		printf(" #%d, %s by %s", (ctr+1), books[ctr].title, books[ctr].author);
		printf("\n It is %d pages and costs $ %.2f", books[ctr].pages, books[ctr].price);
		printf("\n\n");
	}
	return 0;
}