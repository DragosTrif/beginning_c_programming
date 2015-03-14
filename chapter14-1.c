/* This program count from one to 5 
  and then from 5 to one using a while loop*/
  
#include <stdio.h>

int main(void)
{
   int crt = 0;
    
    while(crt < 5)
    {
        printf("Counter is at %d\n", ++crt);
    }
    
    while(crt > 1)
    {
        printf("Counter is at %d\n", --crt);
    }
    return 0;
}
