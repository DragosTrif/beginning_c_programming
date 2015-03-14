/*  This program asks the users for username and pasword
It test wether their password and user name has upercaseletter, lowercase letter
and a digit. if it does the program congratulaits the selection.
If sugest picking a more secure password*/

#include <stdio.h> // for printf and scanf
#include <string.h> //strlen
#include <ctype.h> // for isdigit, isupper and islower

int main(void)
{
	int i;
	int hasUpper, hasLower, hasDigit;
	char user[25], password[25];
	// initialize the  test variables
	hasUpper = hasLower = hasDigit = 0;

	printf("Whats your user name?\n ");
	scanf(" %s", user);

	printf("Please create a password\n");
	scanf(" %s", password);

	for(i=0; i<strlen(password); i++) // This tests if the password has a digit a lowercase leter and upper case letter
	{
		
		if(isdigit(password[i]))
		{	
			hasDigit = 1;
			continue;
	    }

		if(isupper(password[i]))
		{
			hasUpper = 1;
			continue;
		}

		if(islower(password[i]))
		{
			hasLower = 1;
		}
	}
/* This loop will execute only if al three varibles are 1.(the pasword has upper/lower case letters and a digit*/

	if((hasDigit) && (hasUpper) && (hasLower))
		{
			printf(" Excelent job %s\n", user);
			printf(" Your password has lower case  and upper case");
			printf(" letter and digit\n");
		}

	else
		{
			printf("You shuld cosider a new password %s\n", user);
			printf("One that uses lower case, upper case");
			printf(" letters and a digit\n");
		}	
	return 0;
}
