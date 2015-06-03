/*If u take the value of N computed in ex-2
substract 612,049 and then take the result modulo 7,
you will get a number from 0 - 6 that represents the day
of the week in wich this particulary day falls.
Use the functions develeoped in the previos exercies to
develop a program that that displays in wich day of the week
a particular date falls*/

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
	char day_in_english[8];

};





	
int main(void)
{
	
	struct time dateInput_and_Index(struct time d);
	int calculatePassedDays( struct time d, struct time e );
	struct time first[7], second[7];
	int i;

	
	first[7] = dateInput_and_Index(first[7]);
	second[7] = dateInput_and_Index(second[7]);

	/*for( i = 0; i < calculatePassedDays(first[7], second[7]); ++i )
	{
		printf("%c %c %c %c %c %c %c ......", first[i].day_in_english[0],
			first[i].day_in_english[1], first[i].day_in_english[2], first[i].day_in_english[3],
			first[i].day_in_english[5], first[i].day_in_english[6], first[i].day_in_english[7]);
	}*/

   

	   printf(" %d\n", calculatePassedDays(first[7], second[7]));
	 
	 

	
		
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
	  
	    								  
	    			   	   							 
	    	   							 					
			 						

	 
	  struct time e[7] ={
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

int calculatePassedDays( struct time d, struct time e)
{
	int n;
	


	n = ((1461 * (d.year) / 4 + 153 * d.month / 5 + d.day) -	
	   ( 1461 * (e.year) / 4 + 153 * e.month / 5 + e.day) - 612.049) ; 

	   
	   return n % 7;               

}
