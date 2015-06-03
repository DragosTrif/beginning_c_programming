//Determine if a year is a leeap year

#include <stdio.h>

int main(void)
{
	int year, reminder_4, reminder_100, reminder_400;

	printf("Give me a year pls\n");
	scanf(" %d", &year);

	reminder_4 = year % 4;
	reminder_100 = year % 100;
	reminder_400 = year % 400;

	if(reminder_4 == 0 && reminder_100 != 0 || reminder_400 == 0)
	
	{
		printf("The year %d is a leeap year\n ", year);
	}
	

	else
	{	
		printf("The year %d is not a leap year\n", year);
		
	}
	return 0;
}