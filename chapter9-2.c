/* This program calculates the sales price of tires
 adding the sale tax*/
 
 #include <stdio.h>
 #define SALESTAX .07
 
 int main(void)
{
    /* Define Varibels for: a) Number of Tiers b) Cost with out tax
    c) Total cost + tax*/
   
    int numTiers;
    float tirePrice, beforeTax, netSales;
    
    /* Get the number of tiers and the price*/
    
    printf(" How many Tiers did You buy?\n");
    scanf(" %d", &numTiers);
    
    printf(" Wath was the cost per tier? (enter in $XX.XX format)\n");
    scanf(" $%f", &tirePrice);
    /* compute price */
    
    beforeTax = numTiers*tirePrice;
    netSales =(beforeTax +(beforeTax*SALESTAX));
    printf("You spent $%.2f on your tiers", netSales);
    return 0;
}
