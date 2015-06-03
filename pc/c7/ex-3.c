/* Modify program 7.8 so that the value of epsilon is passed as an argument
to the function.Try to experiment with difrent values of epsilon to see
the efect it has on the square root
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
 */
float absoluteValue(float x)
 {
 	if( x < 0)
 	{
 		x = -x;
 	}

 	return x;
 }

 // Function to compute square root of a number

 float squareRoot(float x, float epsilon)
 {
 	//const float epsilon = .00001;
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
 	printf(" squareRoot(2.0,) = %f\n", squareRoot (2.0, .0001));

 	printf(" squareRoot(144.0) = %.2f\n", squareRoot (144.0, 5.00));

 	printf(" squareRoot(17.5) = %.2f\n", squareRoot (17.5, 0.1));

 	return 0;
 }
