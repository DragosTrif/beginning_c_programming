#include <stdio.h>
#include <string.h>

int main(void)
{
    int nrFilme, count, rating, bestRating;
    char nume[40], filmBun[40];
    bestRating =  10;
    
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
        strcpy(filmBun, nume);
        printf("Cel mai bun film este %s\n", nume);
    }   
    return 0;    
}
