/* This program asks for the user home town and the letter abrev of thei home town.
Its the uses a string concentration to build a new string*/

#include <stdio.h> // is needed for puts() and gets()
#include <string.h> // is needed for strcat()

int main(void)
{
	char city[15];
	char state[3];
	char fullLocation[18]= "";

	puts("Whats city do you live in\n");
	gets(city);

	puts("What state do you live in\n");
	gets(state);

	//Concentrate strings

	strcat(fullLocation, city);
	strcat(fullLocation, ", ") ;
	strcat(fullLocation, state);

	puts("\nYou live in");
	puts(fullLocation);

	return 0;
} 