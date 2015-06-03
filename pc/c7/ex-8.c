#include <stdio.h>
//Function to rase to power

unsigned long int x_to_the_n( unsigned long int x , unsigned long int n)
{
	unsigned long int result = 1, i;

	for( i = 0; i < n; ++i)
	{
				
	
		
			result *=  x;
		
		
	}
	

	return result;
}

//function to extract square root


 float absoluteValue(float x)
 {
 	if( x < 0)
 	{
 		x = -x;
 	}

 	return x;
 }

 // Function to compute square root of a number

 float squareRoot(float x)
 {
 	const float epsilon = .00001;
 	float guess = 1.0;

 	while(absoluteValue(guess*guess - x) >= epsilon)
 	{
 		guess =( x / guess + guess) / 2.0;
 	}

 	return guess;
 }

 

 
 int main(void)
 {
 	float a, b, c, x1, x2;
 	

 	
 	
 		printf("Give me  the constant values of the equatio\n");
 		scanf(" %f", &a);
 		scanf(" %f", &b);
 		scanf(" %f", &c);

 	

 	if(x_to_the_n(b, 2)-4*a*c >= 0)
 	{
 		x1 = (-b -squareRoot(x_to_the_n(b, 2)-4*a*c))/2*a;
 		printf(" %f", x1);
 		x2 = (-b + squareRoot(x_to_the_n(b, 2) - 4*a*c)) / 2*a;
 		printf(" %f", x2);
 	}	

 	return 0;
 }
 
 

