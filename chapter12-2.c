/* This program asks for the last name and if the user
has a last name that strats with a leter betwen p and q
they will be send in a sopecial room fottickets*/

#include <stdio.h>

int main(void)
{
    char name[25];
    printf(" Wath is your last name");
    printf(" please capitalize the first letter.\n");
    scanf(" %s", name);
    if((name[0] >= 'P') && (name[0] <= 'Q')) 
    {
        printf("You must go to room 234 to get your ticket\n");
    }
    else
    {
        printf("You can get your ticket here\n");
    }
    return 0;
}
