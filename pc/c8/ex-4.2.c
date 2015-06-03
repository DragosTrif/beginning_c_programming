#include <stdio.h>

struct date
{
	int year;
	int month;
	int day;
	char day_in_english[8];
};

int main(void)
{
	struct date date_and_week[7];
	int i, position_of_day;
	int calculate_day_of_week(struct date d);


	printf("Give the exact date:( dd/mm/yyyy)");
    scanf(" %d %d %d", &date_and_week[7].day, &date_and_week[7].month, &date_and_week[7].year);


	        date_and_week[7] = {
	   							 { date_and_week.year, date_and_week.month, date_and_week.day, {'M','o','n','d', 'a', 'y'} },
	 							 { date_and_week.year, date_and_week.month, date_and_week.day,  {'T', 'u', 's','d', 'a', 'y'}},
	 							 { date_and_week.year, date_and_week.month, date_and_week.day, {'W','e', 'n', 's', 'd', 'e', 'a', 'y'} },
	 			 				 { date_and_week.year, date_and_week.month, date_and_week.day,  {'T', 'h', 'u', 'r', 'd', 'a', 'y'} },
	 							 { date_and_week.year, date_and_week.month, date_and_week.day, {'F', 'r', 'i', 'd', 'a', 'y'}},
	 			 				 { date_and_week.year, date_and_week.month, date_and_week.day, {'S', 'a', 't', 'u', 'r', 'd', 'a', 'y'}  },
	 			 				 { date_and_week.year, date_and_week.month, date_and_week.day, {'S', 'u', 'n', 'd', 'a', 'y'} }  
	 			               };

	 			
	position_of_day = calculate_day_of_week(date_and_week[7]); 

	for(i = position_of_day; i < position_of_day+1 ; ++i )
		{
			printf("%c %c %c %c %c %c %c ......", date_and_week[i].day_in_english[0],
			date_and_week[i].day_in_english[1], date_and_week[i].day_in_english[2],
			 date_and_week[i].day_in_english[3], date_and_week[i].day_in_english[4],
			 date_and_week[i].day_in_english[5], date_and_week[i].day_in_english[6] );
		}	
		

		return 0;			
}

int calculate_day_of_week(struct date d)
{
	int n;

	if(d.month <= 2)
	{
		d.year = d.year-1;
		d.month = d.month + 13;

	}

	else
	{
		d.year = d.year;
		d.month = d.month + 1;
	}
	  
	   
	 
	 n = ((1461 * (d.year) / 4 + 153 * d.month / 5 + d.day) - 612.049);

	 return n % 7;   			   	   				
}