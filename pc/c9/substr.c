/* Make a function substring() to extract a 
portion of a charcter string.
subtring("character", 4, 3, result)
extract 3 charters begining from charter 4, and put the
result in array result*/
 
#include <stdio.h>
#include <string.h>
 
const char* substring( char string[], int start_at, int length, char result[]  )
{
    int i = 0, j = 0;

    // start_at is expressed from a user point of view and users count from 1
    // programs count from zero so we have to transform from users point of view to program point of view
    int first_char_position = start_at  ;
    
    int last_char_position  = first_char_position + length - 1 ;

    char null_zero[] = {"\0"};

    for( i = first_char_position; i <= last_char_position; i++, j++)
    {                
        result[j] = string[i];
        //printf(" %d %c\n", k, result[k]);
    }

    strcat(result, null_zero);
 //printf("%c", result[0]);
 //printf("%c", result[1]);
 //printf("%c", result[2]);
            
    return result;
}
 
int main(void)
{
    char word[] = {"character"};
    char result[81];
    int a = 4;
    int b = 3;
     
    substring(  word  , a  ,  b,  result);
    printf("%s\n", result);
 
    return 0;
}
