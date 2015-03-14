/* this program does just the thing like
    chapter10-1 but it uses compund operators*/
    
#include <stdio.h>

int main(void)
{
   int ctr = 0;
   ctr += 1;
   printf("Counter is at %d.\n", ctr);
   ctr += 1;
   printf("Counter is at %d.\n", ctr);
   ctr += 1;
   printf("Counter is at %d.\n", ctr);
   ctr += 1;
   printf("Counter is at %d.\n", ctr);
   ctr -= 1;
   printf("Counter is at %d.\n", ctr);
   printf("Counter is at %d.\n", ctr -= 1);
   printf("Counter is at %d.\n", ctr -= 1);
   printf("Counter is at %d.\n", ctr -= 1);
  return 0; 
}
    
