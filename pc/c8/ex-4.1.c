#include <stdio.h>

struct date
{
	int year;
	int month;
	int day;
	char day_in_english[8];

};

struct date d[7];


struct date dateInput(struct date d)
{
	
	printf("Give the exact date:( dd/mm/yyyy)");
	scanf(" %d %d %d", &d.day, &d.month, &d.year);



	  struct date e[7] ={
	   			 { d.year, d.month, d.day, {'M','o','n','d', 'a', 'y'} },
	 			 { d.year, d.month, d.day,  {'T', 'u', 's','d', 'a', 'y'}},
	 			 { d.year, d.month, d.day, {'W','e', 'n', 's', 'd', 'e', 'a', 'y'} },
	 			 { d.year, d.month, d.day,  {'T', 'h', 'u', 'r', 'd', 'a', 'y'} },
	 			 { d.year, d.month, d.day, {'F', 'r', 'i', 'd', 'a', 'y'}},
	 			 { d.year, d.month, d.day, {'S', 'a', 't', 'u', 'r', 'd', 'a', 'y'}  },
	 			 { d.year, d.month, d.day, {'S', 'u', 'n', 'd', 'a', 'y'} }  	

	 	       }; 								  
				 
	    	   							 					
			 						

	 
	 	       
	 
	return e[7];
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

int main(void)
{
	int i, n;
	struct date date_and_week[7]; 

	date_and_week[7] = dateInput(date_and_week[7]);

	printf(" %d %d %d", date_and_week[7].year, date_and_week[7].month, date_and_week[7].day);

	n = calculate_day_of_week(date_and_week[7]);

	printf(" %d\n", n);

		for(i = n; i < n+1 ; ++i )
		{
			printf("%c %c %c %c %c %c %c ......", date_and_week[i].day_in_english[0],
			date_and_week[i].day_in_english[1], date_and_week[i].day_in_english[2],
			 date_and_week[i].day_in_english[3], date_and_week[i].day_in_english[4],
			 date_and_week[i].day_in_english[5], date_and_week[i].day_in_english[6] );
		}	
		

		return 0;

}	