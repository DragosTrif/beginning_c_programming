#include <stdio.h>
#include <string.h>
/* Parameters :
if Return value < 0 then it indicates str1 is less than str2.

if Return value > 0 then it indicates str2 is less than str1.

if Return value = 0 then it indicates str1 is equal to str2.*/


int main(void)
{
	char stra[] = {"String compare test"};
    char strab[] = {"String"};

    int result;

    result = strcmp(stra, strab);
    printf("%d", result);

    result = strcmp(stra, stra);
    printf(" %d", result);

    result = strcmp(strab, "String");
    printf(" %d", result);

    return 0;
}