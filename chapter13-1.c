/* This program asks for a number from 1 to 100 and tells then
if the choice is equaly divisible by 2 trough 9*/

#include <stdio.h>

int main(void)
{
    int number;
    printf("Pick a number betwen 1 to 100.\n");
    scanf(" %d", &number);
    printf(" %d %s divisible by 2", number, (number % 2 == 0)? ("is"): ("is not"));
    printf(" %d %s divisible by 3", number, (number % 3 == 0)? ("is"): ("is not"));
    printf(" %d %s divisible by 4", number, (number % 4 == 0)? ("is"): ("is not"));
    printf(" %d %s divisible by 5", number, (number % 5 == 0)? ("is"): ("is not"));
    printf(" %d %s divisible by 6", number, (number % 6 == 0)? ("is"): ("is not"));
    printf(" %d %s divisible by 7", number, (number % 7 == 0)? ("is"): ("is not"));
    printf(" %d %s divisible by 8", number, (number % 8 == 0)? ("is"): ("is not"));
    printf(" %d %s divisible by 9", number, (number % 9 == 0)? ("is"): ("is not"));
    return 0;  
}
