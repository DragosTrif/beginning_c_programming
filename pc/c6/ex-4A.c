/* Write that calculates an avereage of an
array of an array of 10 floating points values*/
 
#include <stdio.h>
#include <stdbool.h>
 
int main(void)
{
    float array[10], array_elements_sum = 0, array_elements_avreage = 0, array_elements_temp ;
    int i;
     
    bool flag = true;
 
    printf("Give the elements of the array\n");
 
    for( i = 0; i < 10; ++i)
    {
        if (scanf("%f", &array_elements_temp) == 1){
            printf("Read elem (as float): %f\n", array_elements_temp);
            array_elements_sum += array_elements_temp;
        } else {
            flag = false;
            break;
            
        }
    }
 
 
    if(flag)
    {
        array_elements_avreage = array_elements_sum / 10;
        printf("Average: %f\n", array_elements_avreage);
    }
    else
    {
        printf(" This is not a number. \n");
    }

    return 0;
}