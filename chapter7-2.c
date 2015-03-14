#include <stdio.h>
#include <string.h>
#include "chapter7-1.h"

int main(void)
{
    int age;
    char childname[14] = "Thomas";
    printf("\n%s have %d kids\n", FAMILY, KIDS);
    
    age = 11;
    printf("The oldest is %s age %d\n", childname, age);
    
    strcpy(childname,"Christopher");
    age = 6;
    printf("The midle boy is %s age %d\n", childname, age);
    
    strcpy(childname, "Diana");
    age = 3;
    printf("The youngest is %s age %d\n", childname, age);
    return 0;
}
