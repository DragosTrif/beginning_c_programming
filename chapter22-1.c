/*This program takes an id number from the user and chechs the id against
a list of custumers in data base.If the custumer exists it uses an array element to 
check their current balance ,
and warns the user if the balance is more than 100*/

#include <stdio.h>

int main(void)
{
	int crt; // loop counter
	int idSearch; // Custmer to look for(the key)
	int found = 0; // Will be 1 true if custumer is found

	int custId[10] = {313, 453, 502, 101, 892, 475, 792, 912, 343, 633};
	float custBal[10] = {0.00, 45.43, 71.23, 301.56, 9.08, 192.41,
						 389.00, 269.67, 18.31, 59.54};

	/* Interact with the user looking for a balance*/
	printf("\n\n***Coustumer balance lookup***\n");
	printf("What coustmer number do you need to check?\n");
	scanf(" %d", &idSearch);

	/* Search to see if  the id exists in the array*/

	for(crt=0; crt < 10; crt++)
	{
		if(idSearch == custId[crt])
			{
				found = 1;
				break;
			}
	}

	if(found)
	{
		if(custBal[crt] > 100.00 )
			{
				printf("** That coustmuers balance is $%.2f\n", custBal[crt]);
				printf("No aditional credit\n");
			}

		else
			{
				printf("** The coustumers credit is good ! **\n");
			}

		
	}

	else
	{
		printf("**** You must have typed an incorect coustumer id ****\n");
		printf("\n id %d was not found in the list\n", idSearch );
	}
	return 0;
}