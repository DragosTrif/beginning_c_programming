//Program to determine tomorows date

#include <stdio.h>

int main(void)
{
	struct date
	{
		int month;
		int day;
		int year;
	};

	struct date today, tomorow;

	const int days_per_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	printf("Enter todays date (mm. dd. yyyy\n");
	scanf(" %d %d %d", &today.month, &today.day, &today.year);
	
	if(today.day != days_per_month[today.month-1])	
	{
		tomorow.day = today.day + 1;
		tomorow.month = today.month;
		tomorow.year = today.year;
	}

	else if( today.month == 12) // end of year
	{
		tomorow.day = 1;
		tomorow.month = 1;
		tomorow.year = today.year + 1;
	}

	else // end of month
	{
		tomorow.day = 1;
		tomorow.month = today.month+1;
		tomorow.year = today.year;
	}

	printf("Tomorrows date is : %d/%d/%d", tomorow.month, tomorow.day, tomorow.year % 100);

	return 0;
}