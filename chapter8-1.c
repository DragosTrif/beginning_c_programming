/* This a sample program that asks users from some basic data
and prints on the screen in order to show what was enterd*/

#include <stdio.h>

int main(void)
// declearing variables 
{
    char firstinitial;
    char secondinitial;
    int age;
    int favoritenumber;
// Using printf and scanf
   { 
     printf("What is your first initial?\n");
     scanf("%c", &firstinitial);
     getchar();
    }
   { 
     printf("What is your second inital?\n");
     scanf("%c", &secondinitial);
     getchar();
    }
  
  
  {
      printf("How old are u?\n");
      scanf("%d", &age);
    }
    {
     printf("whats your favorite number?\n");
     scanf("%d", &favoritenumber);
    }
    {
     printf("Your initials are %c,%c and your %d of age.\n", firstinitial, secondinitial, age);
     printf("\nYour favorite number is %d.", favoritenumber);
    }
    return 0;    
}
