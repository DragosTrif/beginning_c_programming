/* The least comon multiple (lcm) of two positive
integers u and v is the smallest positive integer 
that is evenly divisible by both u an v.Write a function
lcm() that takes two integers arguments and returns their lcm.
The lcm function shuld calculate the least common multiple by
calling the gdc() from program 7.6 in accordance with the folowing indentity
lcm(u,v) = uv / gdc(u, v); u ,v >= 0*/

#include <stdio.h>

int great_common_divisor( int u, int v)
{
	int temp;

	while( v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}

	return u;
}

int least_common_multiple( int u, int v)
{
	int lcm;

	if( u >= 0 && v >= 0)
	{
		lcm = u*v / great_common_divisor( u,  v);
	}
	
	return lcm;	
}

int main(void)
{
	int least_common_multiple( int u, int v);

	printf(" %d", least_common_multiple(15, 10));

	return 0;
}