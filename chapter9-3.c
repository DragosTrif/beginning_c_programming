/*Calculates the avrege of four grades*/

#include <stdio.h>

int main(void)
{
    // Declaring Variables
    
    int grade1, grade2, grade3, grade4;
    float avreageGrade, gradeDelta, percentDiff;
    // The user got the same grade multiple asigments
    
    grade1 = grade3 = 88;
    grade2 = 79;
    // user inputs grade4
    printf("What is grade four?(pick an int betwen 0 and 100)\n");
    scanf("  %d", &grade4);
    
    avreageGrade = (grade1+grade2+grade3+grade4)/4;
    printf("Your avreage grade is %.2f", avreageGrade);
    
    gradeDelta = 95 - avreageGrade;
    percentDiff = 100*((95 - avreageGrade) / 95);
    printf("Your grade is %.2f points lower then the", gradeDelta);
    printf("top grade grade in the class (95)\n");
    printf("You are %.2f percent behaind", percentDiff);
    printf("that grade\n\n\n");
    return 0;   
}

