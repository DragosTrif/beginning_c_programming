/* This progam searches a sorted list of custumer ids 
in order to get credit totals*/

#include <stdio.h>

int main(void)
{
	int ctr; // loop counter
	int idSearch; // Coustumer to look for(the key)
	int found = 0;// 1(true) if the coustumer is found

	/* define the 10 elements in each of the paralel arrays*/

	int custId[10] = {313, 453, 502, 101, 892, 475, 792, 912, 343, 633};
	float custBal[10] = {0.00, 45.43, 71.23, 301.56, 9.08, 192.41, 
						389.00, 229.67, 18.31, 59.54};

	int tempId, inner, outer, didSwap, i; // for sorting
	
	float tempBal;

	/* First sort the arrays by coustumer Id */
	for(outer = 0; outer < 9; outer++)
	{
		didSwap = 0; // Becomes 1 if the list is not yet ordered

		for(inner = outer; inner < 10; inner++)
		{
			if(custId[inner] < custId[outer])
			{
				tempId = custId[inner];//Must swich both arrays or they are not longer linked
				tempBal = custBal[inner];
				custId[inner] = custId[outer];
				custBal[inner] = custBal[outer];
				custId[outer] = tempId;
				custBal[outer] = tempBal;
				didSwap = 1; // because the swap took palce
			}
			if(didSwap == 0)
			{
				break;
			} 
		}
	}	
		
		/* Interact with the users looking to find a blance*/
		printf("\n\n***Customer Balance Look up***\n\n ");
		printf("What is the coustumer number?\n");
		scanf(" %d", &idSearch);

	for ( i = 0; i < 10; i++ ){
		printf("customer number: %d has balance: %2.3f \n", custId[i], custBal[i]);
	}
	
	//now look for the id in the array

	for(ctr = 0; ctr < 10; ctr++)
	{
		if(idSearch == custId[ctr])
		{
			found = 1; // flag is set to one
			break; // no need to keep looping
		}
		/*if(custId[ctr] > idSearch) // no need to keep searching
		{
			break;
		}*/
	}
	//Once the prev loop the id is found(found = 1) or not

	if(found)
	{
		if(custBal[ctr] > 100.00)
		{
			printf(" That coustumer balace is $ %.2f.\n", custBal[ctr]);
			printf("No additinal credit!\n");
		}

		else // blance is less then 100
		{
			printf(" The coustumers credit is good\n");
		}
	}
	else // the id was not found
	{
		printf("\n** Yo have enterted an incorect id **\n ");
		printf("\n Id %3d was not found in the list\n", idSearch);
	}
	return 0;
}