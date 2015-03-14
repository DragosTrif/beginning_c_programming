#include<stdio.h>

int main(void){
    char h[14] = "AliceBobnonono"; //h from haystack
    char n[3] = "Bob"; //n from needle
    int found_needle = 0;
    int i,j;
    int p; 

    printf("Give a name pls\n");
    scanf(" %s", n);

    printf("just read: %s\n",n);
    for( i=0; i<14; i++ ){
        if( n[0] == h[i] ){
            found_needle = 1;
            p=i;
            printf("I:%d, h[i]:|%c|\n", i, h[i]);
            for( j = 0; j < 3; j++){
                if( n[j] != h[i+j]){
                    printf("NON EQUALS!!!!! I:%d, j: %d, h[i+j]:|%c|, n[j]:|%c|\n", i, j, h[i+j], n[j]);
                    found_needle = 0;
                    break;
                } 
            };

        }
        if (found_needle){
            break;
        }
    }
    if (found_needle){
        printf("found %s\n at %d", n, p);
    } else {
        printf(" You are not loged in\n");
    }
    return 0; 
}