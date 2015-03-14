/* totals the money spend on gifts */
#include <stdio.h>

int main(void)
{
    float gift1, gift2, gift3;/* delacraing numeber of variabels*/
    float total;
    
    /* Ask for each gift amount*/
    printf("Give the amount of gift1\n");
    scanf("%f", &gift1);
    printf("Give me the amount for gift2\n");
    scanf("%f", &gift2);
    printf("Give thr amount for gift3\n");
    scanf("%f", &gift3);
    total = gift1 + gift2 + gift3;/*computes the total sum */
    printf("The total sum is %.2f", total);
    return 0; 
}
