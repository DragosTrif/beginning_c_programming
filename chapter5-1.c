#include <stdio.h>

int main(void)
{
    // setup variables and defininig some of them
    char firstInitial, secondInitial;
    int number_of_pencilis;
    int number_of_notebooks;
    float pencilis = 0.23;
    float notebooks = 2.89;
    float lunchbox = 4.99; 
    
    // first child info
    firstInitial = 'j';
    secondInitial = 'R';
    number_of_pencilis = 7;
    number_of_notebooks = 3;
    printf("%c,%c needs %d pencils %d notebooks and 1 lunchbox\n", firstInitial,secondInitial, number_of_pencilis,number_of_notebooks);
    printf("The total cost is %.2f\n",((number_of_pencilis*pencilis)+( number_of_notebooks *notebooks)+lunchbox));
   
    // second child info
     firstInitial = 'A';
     secondInitial = 'D';                                                              
     number_of_pencilis = 5;
     number_of_notebooks = 37;
     printf("%c,%c needs %d pencils %d notebooks and 1 lunchbox\n", firstInitial,secondInitial, number_of_pencilis, number_of_notebooks);
     printf("The total cost is %.2f\n",((number_of_pencilis*pencilis)+( number_of_notebooks *notebooks)+lunchbox));
    return 0;
    }
 

