/* Program that calculates the avreage of a set
of grades and counts the number of failing grades */

#include <stdio.h>

int main(void)
{
	int number_of_grades, i, grade;

	int gradeTotal = 0;

	int failiureCount = 0;

	float avreage;

	printf("How many grades will you be entering");
	scanf(" %d", &number_of_grades);

	for(i = 0; i < number_of_grades; i++)
	{
		printf("Give me the grades #%d pls\n", i+1);
		scanf(" %d", &grade);

		gradeTotal = gradeTotal + grade;
		printf(" Grade toata is %d", gradeTotal);

		if(grade < 65)
		{
			++failiureCount;
		}

	}

	avreage = (float)gradeTotal/number_of_grades;

	printf(" The avreage is %.2f\n", avreage);
	printf("Number of failiure in class is %d\n", failiureCount );

	return 0;
}