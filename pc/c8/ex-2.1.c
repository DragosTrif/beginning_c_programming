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


//struct time elapsedTimeCalculator(d)


	
int main(void)
{
	struct time dateIndex(struct time original);
	struct time dateInput(struct time d);
	int calculatePassedDays( struct time d, struct time e );
	

	struct time first, second;
	int n;

	/*printf("Give the exact date:( dd/mm/yyyy)");
	scanf(" %d %d %d", &first.day, &first.month, &first.year);

	printf("Give the exact date:( dd/mm/yyyy)");
	scanf(" %d %d %d", &second.day, &second.month, &second.year);*/

	first = dateInput(first);
	second = dateInput(second);
	printf(" %d %d %d", first.day, first.month, first.year);


	
    first =	dateIndex(first);
    second = dateIndex(second);

	
	/*n = (1461 * (first.year) / 4 + 153 * first.month / 5 + first.day) -	
	   ( 1461 * (second.year) / 4 + 153 * second.month / 5 + second.day);                   

	printf(" %d\n", n);*/

	   printf(" %d\n", calculatePassedDays(first, second));
	  //printf("%d\n",calculatePassedDays(first,second));
	 // n = calculatePassedDays( dateIndex(first), dateIndex(second) );
	  //printf(" %d\n", n);
	 



	              


	
		
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
	int n;
	//struct time d, e;


	n = (1461 * (d.year) / 4 + 153 * d.month / 5 + d.day) -	
	   ( 1461 * (e.year) / 4 + 153 * e.month / 5 + e.day); 

	  // printf(" %d\n", n);  
	   return n;               

}
