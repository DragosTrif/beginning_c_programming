/*Greedy.c

Write, in a file called greedy.c in your ~/Dropbox/pset1 directory, a program that first asks 
the user how much change is owed and then spits out the minimum number of coins with which said change can be made.
 Use GetFloat from the CS50 Library to get the user’s input and printf from the Standard I/O library to output your answer.
 Assume that the only coins available are quarters (25¢), dimes (10¢), nickels (5¢), and pennies (1¢).*/

 #include <stdio.h>

 int main(void)
 {
 	float change;
 	float result;
 	int nb_coins = 0;

do
{
  printf("Give the owed change\n");
  scanf("%f", &change);



}

while( change < 0);

change = change * 100;

  while((change - 50) >= 0)
  {
    //result = a/a;
  	//printf("%f",a);
  	change = change - 50;
  	//printf("%f", change);
    if(change < 50 && change >= 25)
    {
      while((change -25 ) >= 0)
      {
        change = change - 25;
        ++nb_coins;
      }
     } 

    if(change < 25 && change >= 10)
      {
        while(( change -10 ) >= 0)
        {  
          change = change - 10;
          ++nb_coins;
        }  
      }

    if(change < 10 && change >= 5) 
    {
      while(( change - 5) >= 0)
      {
        change = change - 5;
        ++nb_coins;
      }
    } 

    if(change < 5 && change > 0)
    {
      while(change - 1 >= 0)
      {
        change = change - 1;
        ++nb_coins;
      }
    }
    
  	++nb_coins;
  }



	printf("%d", nb_coins); 	

 	return 0;
 }

