/* This program counts from 1 to  5 and then
   back to one usind increment and decrement operators*/
   
#include <stdio.h>

int main(void)
{
    int ctr = 0;
    
    printf("Counter is at %d\n", ++ctr);
    printf("Counter is at %d\n", ++ctr);
    printf("Counter is at %d\n", ++ctr);
    printf("Counter is at %d\n", ++ctr);
    printf("Counter is at %d\n", ++ctr);
    
    printf("Counter is at %d\n", --ctr);
    printf("Counter is at %d\n", --ctr);
    printf("Counter is at %d\n", --ctr);
    printf("Counter is at %d\n", --ctr);
    printf("Counter is at %d\n", --ctr);
    
    printf("the size of ctr is %d\n", sizeof(ctr));
    
    return 0;
}
