/* This program will ask the user to input test grades for 25 students
and then compute an avrege test grade. If fewer then students took the test the
user can input -1 to end the looop, only enterde grade will be used to compute the
average*/

# include <stdio.h>
# include <string.h>

int main(void)
{
    int numTest;
    float stTest, avg, total=0.0;

    // Asks for 25 tests

    for(numTest=0; numTest < 25; numTest++)
    {
        {
            printf("What is the next stundent score\n");
            scanf(" %f", &stTest);
        }
        if(stTest < 0.0)
        {
            break;
        }
        total += stTest;
   }
   avg = total/numTest;
   printf("The avreage is %.1f%%\n", avg);
   return 0;
}
