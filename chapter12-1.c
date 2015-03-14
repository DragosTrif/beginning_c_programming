/* This program defines a series of variabiles and expresions and
 uses a series of realtional and logical operators to test the against each 
 other*/
 
 #include <stdio.h>
 
 int main(void)
 {
    int friends = 6;
    int potterBooks = 7;
    int starWars = 6;
    int months =12;
    int beatles = 4;
    int avengers = 6;
    int baseball = 9;
    int basketball = 5;
    int football =11;
    /* The first series of statments uses AND operators to test
      1. if the cast of Friends and Betales have to make a basketball team
      2. if the cast of Friends and Avengers are sufficent to make a football team*/
     
      if((friends + beatles >= baseball) && (friends + avengers >= football))
      {
        printf("The cast of Friends and Beatles are large anuff");
        printf(" to make a basketball team");
        printf(" and the cast of Friends and Avengers are sufficent");
        printf(" to make a football team\n");
      }
      else
      {
        printf("Either the Friends cannot make a");
        printf(" baseball team with the Fab four\n");
        printf("Or they could make Giirdirion Gang with the");
        printf("with the Avengers (or both!)\n");
      }
      /* This second statement uses or operator to test:
      whether the number of Star Wars movies is less then the number of months
      in a year the  number of harryPotter books is less the the number of 
      the months*/
      if((starWars <= months) || (potterBooks <= months))
      {
        printf("You could read a Harry Potter book");
        printf(" or you could watch a Star War movie");
        printf(" per month and still finsh in one year\n");       
      }
      else
      {
        printf("There isnt sufficent time\n");
      }
      /*The final stament uses not to test for:
      1 the number of baseball player + basketball players is not greater
      the the number of football players*/
      if(!(baseball+basketball > football))
      {
        printf("A football team is larger then a baseball and a basketball");
        printf("added togther\n");
      }  
      else
      {
        printf("A basketball team combined with a baseball team");
        printf(" is larger then a footbal team\n");    
      }
      return 0;
 }
