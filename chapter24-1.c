/* This program demonstartes pointers by declaring and intializing
both regular and pointer variables for int, float and char type.*/

#include <stdio.h>

int main(void)
{
	int kids;
	int * pKids;

	float price;
	float * pPrice;

	char code;
	char * pCode;

	price = 17.50;
	pPrice = &price;

	printf("How many kids are you taking to the water park?\n");
	scanf(" %d", &kids);

	pKids = &kids;

	printf("Do you have a discount tiket for the water park?\n");
	printf("\n Enter E for employe discount, S for save more");
	printf(" discount or N for no discount\n");

	scanf(" %c", &code);

	pCode = &code;

	printf(" first let do it with the variables\n");
	printf("You have %d kids", kids);

	switch(code)
	{
		case ('E'):
		printf("The employe discount saves you 25 percent\n");
		printf(" the total cost is %.2f",(price*.75*kids));
		break;

		case ('S'):
		printf(" The save more discount gets you 15 percent\n");
		printf(" the total cost is %.2f", (price*.85*kids));
		break;

		default:
		printf("You will pay full price for you tockets");
		printf(" %.2f", price);
	}


}
