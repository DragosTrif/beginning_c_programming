// Program to ilustrate structure pointers

#include <stdio.h>

int main(void)
{
	struct date
	{
		int month;
		int day;
		int year;

	};


	struct date today, *date_ptr;

	date_ptr = &today;

	date_ptr -> month = 9;
	date_ptr -> day = 25;
	date_ptr -> year = 2015;

	 printf("%d %d %d",date_ptr -> month, date_ptr -> day, date_ptr -> year % 100 );

	 return 0;
}