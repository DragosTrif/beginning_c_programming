#include <stdio.h>

int main(void)

{
    /*Understending printf() escapes, sequnces and conversions*/
    printf("Quantity\tCosts\tTotal\n");
    printf("%d         \t$%.2f\t$%.2f", 3, 9.99, 29.97);
    printf("To many spaces     \b\b\b\b can be fix with the");
    printf("\\%c Escape charcter\n", 'b');
    printf("\n\a\n\a\n\aSkip a few lines, and beeep");
    printf("a few beeps.\n\n\n");
    printf("%s,%c", "you are king but learninig" , 'C');
    printf("you have just finshed capter %d.\nyou have finshed", 4);
    printf("%.1f%c of the book.\n", 12.500, '%');
    printf("\n\nOne third equals %.2f or", 0.333333);
    printf("%.3f or %.4f or", 0.333333, 0.333333);
    printf("%.5f, %.6f\n\n\n", 0.333333, 0.333333);
    return 0; 
    
}
