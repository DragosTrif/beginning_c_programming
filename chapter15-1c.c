#include <stdio.h>
#include <string.h>

int main(void)
{
    int nrFilme, count, rating, bestRating, lowRating;
    char nume[40], filmBun[40], filmSlab[40];
    bestRating =  0;
    lowRating = 10;
    
    do
    {
        printf("Cate filme ai vazut pe an?\n");
        scanf(" %d", &nrFilme);
    }
    while(nrFilme < 1);
    
    for(count = 1; count <= nrFilme; count++)
    {
        printf("Cum se numesc filmele");
        printf(" ce rating au?\n");
        scanf(" %s %d", nume, &rating);    
    }
    if(rating <= bestRating)
    {
        {
            strcpy(filmBun, nume);
            bestRating = rating;            
        }
    if(rating < lowRating)
        {
            strcpy(filmSlab, nume);
            lowRating = rating;
        }  
       printf("Cel mai bun film este %s\n", nume);
       printf("Cel mai slab film este %s\n", nume);
    } 
    return 0;    
}
