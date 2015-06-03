/*Modify Program 7.8 so that the value of guess
is printed each time trough the while loop.Notice
how quickly the value of guess converges to the square 
root.What conclusion can you reach about the number of iteration
through the loop, the number whose square root is being calculated
, and the value of the initial guess.*/

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

 float squareRoot(float x)
 {
 	const float epsilon = .00001;
 	float guess = 1.0;

 	while(absoluteValue(guess*guess - x) >= epsilon)
 	{
 		guess =( x / guess + guess) / 2.0;
 		printf(" %f", guess);
 	}

 	return guess;
 }

 int main(void)
 {
 	printf(" squareRoot(2.0) = %f\n", squareRoot (2.0));

 	printf(" squareRoot(144.0) = %f\n", squareRoot (144.0));

 	printf(" squareRoot(17.5) = %f\n", squareRoot (17.5));

 	return 0;
 }
 
