#include <stdio.h>


int main(void)
{
	int i;

	struct d
	{
		int year;
		int month;
		int week;
		char day[8];
	};

	 //scanf(" %d %d %d", &d.year, &d.month, &d.week);

	const struct d day[7]
	{
		         { d.year, d.month, d.week, {'M','o','n','d', 'a', 'y'} },
	 			 { d.year, d.month, d.week,  {'T', 'u', 's','d', 'a', 'y'}},
	 			 { d.year, d.month, d.week, {'W','e', 'n', 's', 'd', 'e', 'a', 'y'} },
	 			 { d.year, d.month, d.week,  {'T', 'h', 'u', 'r', 'd', 'a', 'y'} },
	 			 { d.year, d.month, d.week, {'F', 'r', 'i', 'd', 'a', 'y'}},
	 			 { d.year, d.month, d.week, {'S', 'a', 't', 'u', 'r', 'd', 'a', 'y'}  },
	 			 { d.year, d.month, d.week, {'S', 'u', 'n', 'd', 'a', 'y'} }  	

	};

	for(i = 0; i < 7; ++i)
	{
		printf("%c %c %c %c %c %c %c %c..............%d\n", day[i].day[0], day[i].day[1], day[i].day[2],
															day[i].day[3], day[i].day[4], day[i].day[5],
															day[i].day[6] );
	}

	return 0;
}