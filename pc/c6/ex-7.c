/* Sieve of  Erathosthenes Alghorithm
To display all Prime Numbers betwen 1 and n

Step 1: Define an arrat of integers P.Set all elements of
        P[i] to 0,2 <= i <= n;

Step 2:  Set i = 2;
Step 3: if i > n, the alghoritym terminates;
Step 4: If P[i] is 0, then i is prime.
Step 5: For all positive intgeres values of j, such
        as ixj <= n, set P[i][j] to 1;
Step 6: Add one to i and go to step 3;*/


#include <stdio.h>

int main(void)
{
	float P[10];
	 int i;

	for( i = 0; i < 120; i++)
	{
		P[10] = i ;
		
		
			printf(" %.2f", P[10]);
		
	}

	return 0;
}        


     
