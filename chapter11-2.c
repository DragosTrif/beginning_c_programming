/* this asks the users for the year of his birth 
  is also cheks if the user didnt input a future year8
  and calcutes if the user is born in a leap year*/
  
  #include <stdio.h>
  #define CURENTYEAR 2015
  
  int main(void)
  {
    int yearBorn, age;
    printf("In ce an te-ai nascut ?\n");
    scanf(" %d", &yearBorn);
    
        if(yearBorn > CURENTYEAR)
        printf("Esti un time travelar");
    
    else
        {
           age = CURENTYEAR- yearBorn;
           printf("Anul asta vei implini %d ani,\n",age);   
          if((CURENTYEAR % 4) == 0)
            {
                printf("Esti nascut in an bisect\n");
             }
     }        
    return 0;   
  }
