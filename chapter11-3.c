/* This program asks the user for their state of happpines
   on a scale of 1 to 10 and then gives a custom 2 line mesege 
   based on the scales : 1-2, 3-4, 5-7, 8-10*/
   
#include <stdio.h>

int main(void)
{
    int happy;
    printf("How happy are you on a scale of 1 to 10\n");
    scanf(" %d", &happy);
    if(happy >= 8)
    {
        printf("You are  the lowest on the happines scale\n");
        printf("You shuld smile more offten\n");
    }
    else if(happy >= 5)
   {
        printf("You are low on the happines scale\n");
        printf("You shuld relax more\n");
   }
   else if(happy >= 3 )
   {
        printf(" You are medium on the happines scale\n");
        printf("You shuld joke more");
   } 
   else
   {
        printf(" You are highest on the happines scale\n");
        printf("Enjoy life\n");
    }
    return 0;        
}
