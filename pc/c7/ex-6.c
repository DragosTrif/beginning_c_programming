/*Modify  program 7.8 so that the square root function 
accepts double precision arguments and returns the result as a double
precision value.Be ceratin to change the  value of epsilon to reflect the fact
that the double value are used*/
#include <stdio.h>

 float absoluteValue(float x)
 {
 	if( x < 0)
 	{
 		x = -x;
 	}

 	return x;
 }

 // Function to compute square root of a number

 double squareRoot(double x)
 {
 	const float epsilon = .0000000001;
 	double guess = 1.0;

 	while(absoluteValue(guess*guess - x) >= epsilon)
 	{
 		guess =( x / guess + guess) / 2.0;
 	}

 	return guess;
 }

 int main(void)
 {
 	printf(" squareRoot(2.0) = %f\n", squareRoot (2.0));

 	printf(" squareRoot(144.0) = %.2f\n", squareRoot (144.0));

 	printf(" squareRoot(17.5) = %.2f\n", squareRoot (17.5));

 	return 0;
 }
 

