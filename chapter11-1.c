/* This program ask user for their birth and calculates
 how old they be in the curent year*/
 
 #include <stdio.h>
 #define CURENTYEAR 2015
 
 int main(void)
 {
    int yearBorn, age;
    printf("What is the year you were born?\n");
    scanf(" %d", &yearBorn);
    
    if(yearBorn > CURENTYEAR)
    {
        printf("Really You are't born yet?\n");
        printf("Wath is the year you weree born?!\n");
        scanf(" %d", &yearBorn);
    } 
    
    age = CURENTYEAR - yearBorn;
    printf("So this year u will turn %d on your bithday\n", age);
    if ((yearBorn % 4) == 0)
    {
        printf("You were born in a leaap year\n");
        return 0;
    }    
 }
