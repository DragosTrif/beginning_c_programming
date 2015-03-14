/* This program presents a menu of choices, get the user a code
the executes a line or two of code using the swich statment*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int choice;

	printf(" What do you want to do\n");
	printf("1. Add a new contact\n");
	printf("2. Edit an existing contact\n");
	printf("3. Call a contact\n");
	printf("4. Email a contact\n");
	printf("5. Exit");

	do
	{
		printf(" Enter your choice\n");
		scanf(" %d", &choice);

		switch( choice)
		{
			case(1): 
			        printf("\n To ad a contact ul need");
			        printf(" the contacts");
			        printf(" First Name, Last Name, and number\n ");

			        break;
			case(2):
					printf("\n Get ready to enter the name of");
					printf(" the contact do you wish to change\n");

					break;
			case(3):
					printf("\nPrint the name of the contact");
					printf("you wish to call\n");

					break;
			case(4):
					printf("\nPrint the name of the contact ");
					printf(" u wish to email\n");

					break;
			case(5): exit(1);
			default: printf("\n%d is not a valid choiche", choice);
					 printf("Try again\n");	

					 break;				 

		}	
	}
  while((choice < 1) || (choice > 5));
 return 0;  
}
