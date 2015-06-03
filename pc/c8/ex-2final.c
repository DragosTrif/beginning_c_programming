/* Write a program that permits a user 
to input two dates and then 
calculates the the number of elapsed days
betwen the two dates. Break the program into logical functions*/

#include <stdio.h>

struct time
{
	int year;
	int month;
	int day;
};





	
int main(void)
{
	
	struct time dateInput_and_Index(struct time d);
	int calculatePassedDays( struct time d, struct time e );
	struct time first, second;

	
	first = dateInput_and_Index(first);
	second = dateInput_and_Index(second);

   

	   printf(" %d\n", calculatePassedDays(first, second));
	 
	 

	
		
	return 0;
	
		
	
}



struct time dateInput_and_Index(struct time d)
{
	printf("Give the exact date:( dd/mm/yyyy)");
	scanf(" %d %d %d", &d.day, &d.month, &d.year);

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

	

	return d;

}

int calculatePassedDays( struct time d, struct time e)
{
	int n;
	


	n = (1461 * (d.year) / 4 + 153 * d.month / 5 + d.day) -	
	   ( 1461 * (e.year) / 4 + 153 * e.month / 5 + e.day); 

	   
	   return n;               

}
