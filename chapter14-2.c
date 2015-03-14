/* This program multiplies to numbers and shows the result
for as long the user wants to pressin N will break the loop.*/

#include <stdio.h>

int main(void)
{
    float num1, num2, result;
    char choice;
    do
    {
        printf("Input num1\n");
        scanf(" %f", &num1);
        
        printf("Input num2\n");
        scanf(" %f", &num2);
        
        result = num1*num2;
        printf("The result is : %.2f\n", result);
        
        printf("Do you want to enter a second pair");
        printf(" to multiply (y/n): ");
        scanf(" %c", &choice);
        if(choice == 'n')
        {
            choice = 'N';
        }
    }
    while(choice != 'N');
    return 0;
}
