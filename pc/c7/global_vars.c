#include <stdio.h>

int a,b,c;

int sum( int n2, int n1 ){
	n1 += n2;
	return n1;
}

int main(){
	int nr1, nr2;

	a = 3;
	b = 4;

	printf("suma nr %d si %d este %d\n", a,b, sum(a,b));
}