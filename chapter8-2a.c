/* This is a smaple program that asks the users for some basics inputs 
 in oders to see wath happens*/
 
 #include <stdio.h>
 
 int main(void)
 {
    char topping[24];
    int slices;
    int month;
    int day;
    int year;
    float cost;
    
    // The frist scanf will lock for the floating point variable
    printf("How much does a pizza cost in ur area?");
    printf(" enter $XX.XX\n");
    scanf(" %f", &cost);
    // topping is a string so it dosent need &
    printf("Whats ur favorite topping?");
    scanf(" %s", topping);
    
    printf("How many slices of %s pizza", topping);
    printf("can u eat in one sitting\n");
    scanf(" %d", &slices);
    
    printf("Whath day is today enter XX/XX/XX format\n");
    scanf(" %d,%d,%d", &month, &day, &year);
    
    printf("Why dont treat your self with pizza on XX/XX/XX format ?\n");
    scanf(" %d,%d,%d", &month, &day, &year);
    
    return 0;
 }
