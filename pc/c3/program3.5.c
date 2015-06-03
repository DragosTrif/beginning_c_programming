// Basic conversion in c

# include <stdio.h>

int main(void)
{
	float f1 = 123.125, f2;

	int il, i2 = -150;

	char c = 'a';

	// float to integer conversion

	il = f1;
	printf(" %f assinged to an int produces %d\n", f1, il);

	//integer to folat concersion

	f1 = i2;
	printf(" %d assinged to a float produces %f\n", i2, f1);

	f1 = i2/100; // intger divide by integer
	printf("%d divided by 100 produces a %f\n", i2, f1);

	f2 = i2/100.0; // int divided by a float
	printf("%d divided by 100.0 produces %f\n", i2, f2);

	f2 = (float) i2/100; //type cast operator;
	printf("(float) %d divided by 100 produceses %f\n", i2, f2);

	return 0;
}