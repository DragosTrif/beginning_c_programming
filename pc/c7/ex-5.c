/*The criteria for termination of the loop in the square_root()
function is not suitable for use when computing wery large or very
small numbers. Rather then comparing the difrence betwen the value of x and
guess^2 the program should compare the ratio of the two numbers to one.
The closer the ratio gets to one the more acuurate is the square root.*/


//Function to calculate the absolute value of a number
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
 	//float guess_x_ratio;
 	 //guess_x_ratio = ;
 	//printf(" %f", guess_x_ratio);

 	while(absoluteValue(guess * guess / x ) >= epsilon)

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
 

