/* Write that calculates an avereage of an
array of an array of 10 floating points values*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	float array[10], array_elements_sum , array_elements_avreage = 0, array_elements_temp ;
	int i;
	 
	bool flag = false;

	printf("Give the elements of the array\n");

	for( i = 0; i < 10; ++i)
	{
		scanf(" %f", &array_elements_temp);

		if(array_elements_temp >= 0 || array_elements_temp <= 0)
		{
			array[i] = array_elements_temp;
			array_elements_sum += array[i];
			flag = true;
		}

		else if(array_elements_temp >= 'a' && array_elements_temp <= 'z')
		{
			flag = false;
			

			break;
		

		}

		else
		{
			flag = false;
			break;
			
		}


		
	}




	if(flag == true)
	{
		array_elements_avreage = array_elements_sum / 10;
		printf(" %f\n", array_elements_avreage);
	}
	else
	{
		printf(" This is not a number\n");
	}
	
 

		
	

	return 0;
}