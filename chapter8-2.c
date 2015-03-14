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
    scanf(" $%f", &cost);
    // topping is a string so it dosent need &
    printf("Whats ur favorite topping?");
    scanf(" %s", topping);
    
    printf("How many slices of %s pizza", topping);
    printf("can u eat in one sitting\n");
    scanf(" %d", &slices);
    
    printf("Whath day is today enter XX/XX/XX format(enter in XX/XX/XX format).\n");
    scanf(" %d/%d/%d", &month, &day, &year);
    
    printf("\n\n Why dont u treat ur self on dinner on  %d/%d/%d\n ?", &month, &day, &year);
    printf("\n and have %d slices %s pizza\n", slices, topping);
    printf("it will only cost $%.2f !\n\n\n", cost);
    return 0;
 }
