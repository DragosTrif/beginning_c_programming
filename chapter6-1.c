//This string pairs a Kid with is favorite superhero

#include <stdio.h>
#include <string.h>

int main(void)
{
    char Kid1[12];
    //Kid1 can hold 11 charcters
   // Kid2 will be 7 charcters Maddie plus null 0
   char Kid2[] = "Maddie";
   //Kid3 is also 7 charcters but spefcly defiened
   char Kid3[7] = "Andrew";
   //Hero1 will be 7 charcters adding null 0
   char Hero1[] = "Batman";
   //Hero2 will have extra room just in case
   char Hero2[34] = "Spiderman";
   char Hero3[25];
   //Kid1 is defined charcter by charcter(not effcent)
   Kid1[0] = 'K';
   Kid1[1] = 'A';
   Kid1[2] = 't';
   Kid1[3] = 'i';
   Kid1[4] = 'e';
   Kid1[5] = '\0'; // Dont forget the null 0 so C would no when the string ends
   
   strcpy(Hero3,"the incredible hulk");
   
   printf("%s\'s favorite hero is %s.\n", Kid1, Hero1);
   printf("%s\'s favorite hero is %s.\n", Kid2, Hero2);
   printf("%s\'s favorite hero is %s.\n", Kid3, Hero3);
     
     return 0;    
} 
