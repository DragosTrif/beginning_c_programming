//Program to determine tomorows date
#include <stdio.h>
#include <stdbool.h>

struct date
{
	int month;
	int day;
	int year;
};

//Function to calculate tomorows function

struct date dateUpdate(struct date today)
{
	struct date tomorow;
	int numberOfDays(struct date d);

	if( today.day != numberOfDays(today))
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

	else //end of month
	{
		tomorow.day = 1;
		tomorow.month = today.month + 1;
		tomorow.year = today.year;
	}

	return tomorow;
	
		
	
}

// Function to find the number of days in a month;

int numberOfDays (struct date d)
{
	int days;
	bool isLeapYear(struct date d);
	const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if(isLeapYear(d) && d.month == 2) 
	{
		days = 29;
	}

	else
	{
		days = daysPerMonth[d.month-1];
	}

	return days;
}

// Function to determine if it is a leap year

bool isLeapYear (struct date d)
{
	bool leapYearFlag;

	if(( d.year % 4 == 0 && d.year != 0) || d.year % 400 == 0)
	{
		leapYearFlag = true;
	}

	else
	{
		leapYearFlag = false;
	}

	return leapYearFlag;
}

int main(void)
{
	struct date dateUpdate(struct date today);
	struct date thisDay, nextDay;

	printf("Enter todays date(mm/dd/yyyy)\n");
	scanf(" %d %d %d", &thisDay.month, &thisDay.day, &thisDay.year);

	nextDay = dateUpdate(thisDay);

	printf("Tomorows date is %d/%d/%.2d\n", nextDay.month, nextDay.day, nextDay.year);

	return 0;
		
	
}