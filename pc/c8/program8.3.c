//Program to determine tomorows date

#include <stdio.h>
#include <stdbool.h>

struct date
{
	int month;
	int day;
	int year;
};

int main(void)
{
	struct date today, tomorow;

	int numberOfDays(struct date d);

	printf("Enter todays date (mm. dd. yyyy)\n");
	scanf(" %d %d %d", &today.month, &today.day, &today.year);

	if( today.day != numberOfDays(today))
	{
		tomorow.day = today.day + 1;
		tomorow.month = today.month;
		tomorow.year = today.year;
	}

	else if( today.month == 12)// end of year
	{
		tomorow.day = 1;
		tomorow.month = 1;
		tomorow.year = today.year + 1;
	}

	else //end of month
	{
		tomorow.day = 1;
		tomorow.month = today.month+1;
		tomorow.year = today.year;
	}

	printf("Tomorrows date is : %d/%d/%d", tomorow.month, tomorow.day, tomorow.year % 100);

	return 0;

}

//Function to find the number of days in a month

int numberOfDays( struct date d)
{
	int days;
	bool isLeapYear( struct date d);

	const int days_per_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if( isLeapYear(d) == true && d.month == 2)
	{
		days = 29;
	}

	else
	{
		days = days_per_month[d.month-1];
	}

	return days;



}

//Function to determine if a year is leap

bool isLeapYear(struct  date d )
{
	bool leapYearFlag;

	if(( d.year % 4 == 0 && d.year % 100 != 0)
		|| d.year % 400 == 0)
	{
		leapYearFlag = true;
	}

	else
	{
		leapYearFlag = false;
	}

	return leapYearFlag;
}