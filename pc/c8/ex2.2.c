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
	struct time dateIndex(struct time original);
	struct time dateInput(struct time d);
	int calculatePassedDays( struct time d, struct time e );
	

	struct time first, second;
	int n;



	dateInput(first);
	dateInput(second);


	
   	dateIndex(first);
   	printf("%d %d %d", first.day, first.month, first.year);
	dateIndex(second);

	  n = calculatePassedDays (first,second );
	 // printf(" %d\n", n);
	 



	              


	
		
	return 0;
	
		
	
}

struct time dateIndex(struct time original)
{
	//int n;
	

	if(original.month <= 2)
	{
		original.year = original.year-1;
		original.month = original.month + 13;

	}

	else
	{
		original.year = original.year;
		original.month = original.month + 1;
	}

	

	
	
	return original;

}

struct time dateInput(struct time d)
{
	printf("Give the exact date:( dd/mm/yyyy)");
	scanf(" %d %d %d", &d.day, &d.month, &d.year);

	return d;

}

int calculatePassedDays( struct time d, struct time e)
{
	struct time a, b;
	int n;

   a.year =  d.year;
   a.month = d.month;
   a.day = d.day;

   b.year = e.year;
   b.month = e.month;
   b.day = e.day;
   
	


	n = (1461 * (a.year) / 4 + 153 * a.month / 5 + a.day) -	
	   ( 1461 * (b.year) / 4 + 153 * b.month / 5 + b.day); 

	  // printf(" %d\n", n);  
	   return n;               

}
