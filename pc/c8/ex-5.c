/* Write a function called clocKeeper() that
takes as it argument date_and_time structure as
defined in this chapter.The function shuld call
the timeUpdate() and if it reaches midnight, the 
function shuld call the dateUpdate() to switch over 
to the next day.Have the function to return the updated
date_and_time structure*/

#include <stdio.h>
#include <stdbool.h>

struct date
{
	int month;
	int day;
	int year;
};

struct time
{
	int second;
	int minute;
	int hour;
};


struct date_and_time
{
	struct date sdate;
	struct time stime;
};



struct clock_kepper( struct date_and_time d )
{
	struct date_and_time updated_time_and_date;

	updated_time_and_date.stime = time_update(updated_time_and_date.stime);

	if(( updated_time_and_date.stime.hour == 0) && ( updated_time_and_date.stime.minute == 0) && 
		( updated_time_and_date.stime.second == 0))
	{
		updated_time_and_date.sdate = date_update(updated_time_and_date.sdate );
	}

	return updated_time_and_date;

}

struct time_update( struct date_and_time now)
{
	++now.stime.second;

	if(now.stime.second == 60)
	{
		now.stime.second = 0;
		++now.stime.minute;
	}
	if(now.stime.minute == 60)
	{
		now.stime.minute == 0;
		++now.stime.hour;
	}

	if(snow.hour == 24)
	{
		now.hour == 0;
	}

	return now;

}

struct date_update(struct date_and_time today)
{
	struct date_and_time tomorow;

	int number_of_days(struct date_and_time d);
	
	if(today.sdate.day != number_of_days(today.sdate.day))
	{
		tomorow.sdate.day = today.sdate.day + 1;
		tomorow.sdate.month = today.sdate.month;
		tomorow.sdate.year = today.sdate.year;
	}

	else if( today.sdate.month == 12)
	{
		tomorow.sdate.day = 1;
		tomorow.sdate.month = 1;
		tomorow.sdate.year = today.sdate.year+1;
	}

	else
	{
		tomorow.sdate.day = 1;
		tomorow.sdate.month = today.sdate.month + 1;
		tomorow.sdate.year = today.sdate.month;
	}


	return tomorow;
			
	
}

int number_of_days(struct date_and_time d)
{
	int days;
	bool is_leap_year(struct date_and_time d);

	const int days_per_month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if( is_leap_year(d) && d.sdate.month == 2)
	{
		days = 29;
	}

	else
	{
		days = days_per_month[d.sdate.month - 1];
	}

	return days;
}

bool is_leap_year( struct date_and_time d )
{
	bool leap_year_flag;

	if(( d.sdate.year % 4 == 0 && d.sdate.year % 100 != 0) || d.sdate.year % 400 == 0)
	{
		leap_year_flag = true;

	}

	else
	{
		leap_year_flag = false;
	}


	return leap_year_flag;
}

int main(void)
{
	struct date_and_time today;


	printf("Give the date(dd:mm:yyyy)");
	today.sdate = scanf(" %d:%d:%d", &today.sdate.day, &today.sdate.month, &today.sdate.year);


	printf("Give me the time(hh:mm:ss)");
	today.stime = scanf(" %d:%d:%d", &today.stime.hour, &today.stime.minute, &today.stime.second);

	today.stime  = time_update(today.stime);

	if( today.stime.hour == 0 && today.stime.minute == 0 && today.stime.second == 0)
	{
		today.sdate  = date_update(today.sdate);
	}

	return 0;
}
