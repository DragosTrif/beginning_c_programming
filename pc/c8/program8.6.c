//Program to ilustrate arrays of structure

#include <stdio.h>

struct time
{
	int hour;
	int minute;
	int second;
};

int main(void)
{
	struct time timeUpdate( struct time now);
	struct time testTime[5] = {{11,59,59}, {12, 0, 0}, {1, 29, 59},
								{23,59,59}, {19, 12, 27}};

	int i;

	for( i = 0; i < 5; ++i)
	{
		printf("Time is %.2d:%.2d:%2d", testTime[i].hour, testTime[i].minute, testTime[i].second);
		testTime[i] = timeUpdate(testTime[i]);

		printf("... one second later it is %.2d:%.2d:%.2d\n", testTime[i].hour, testTime[i].minute, testTime[i].second);

	}

	return 0;							
}

struct time timeUpdate( struct time now)
{
	++now.second;

	if(now.second == 60)
	{
		now.second = 0;
		++now.minute;
	}

	if(now.minute == 60)
	{
		now.minute = 0;
		++now.hour;
	}

	if(now.hour == 24)
	{
		now.hour = 0;
	}

	return now;
}