// Function to calculate the absolute value

#include <stdio.h>

float abslouteValue(float x)
{
	if(x < 0)
	{
		x = -x;
	}

	return x;
}

int main(void)
{
	float f1 = -15.5, f2 = 20.0, f3 = -5.0;
	int il = -716;
	float result;

	result = abslouteValue(f1);
	printf("result = %.2f\n", result);
	printf("f1 = %.2f\n", f1);

	result = abslouteValue(f3) + abslouteValue(f2);
	printf("result = %.2f\n", result);

	result = abslouteValue((float)il);
	printf("result = %.2f\n", result);

	result = abslouteValue(il);
	printf("result = %.2f\n", result);
	

	printf(" %.2f\n", abslouteValue(-6.0) / 4);

	return 0;

}