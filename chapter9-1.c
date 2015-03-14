/* Math operators */

#include <stdio.h>

int main(void)
{
    /* two sets of variabiles int and float */
    float a = 19.0;
    float b = 5.0;
    float floatAnswer;
    
    int x = 19;
    int y = 5;
    int intAnswer;
     
    // using float to create answers of 3.8
    floatAnswer = a/b;
    printf(" %.1f if divided with %.1f equals %.1f\n", a, b, floatAnswer);
   
    //using int to create an answers of 3
    floatAnswer = x/y;
    printf(" %d if divided %d equals %.1f\n", x, y, floatAnswer);    
    // this will also create will also be 3 as the result dosent ad up
    intAnswer = a/b;
    printf(" %.1f if divided %.1f equals %d\n", a, b, intAnswer);
    // this calculates the reminder 4
    intAnswer = x % y;
    printf(" %d modulus %d equals %d", x, y, intAnswer); 
    
    return 0;    
}      
