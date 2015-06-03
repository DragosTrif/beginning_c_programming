//Program to update time by one second

#include <stdio.h>

struct time
{
	int hour;
	int minute;
	int second;
};

int main(void)
{
	struct time timeUpdate(struct time now);

	struct time curentTime, nextTime;

	printf("Enter the time(hh/mm/ss)\n");
	scanf(" %d %d %d", &curentTime.hour, &curentTime.minute, &curentTime.second);

	nextTime = timeUpdate(curentTime);

	printf("Updated time is %.2d:%.2d:%.2d\n", nextTime.hour, nextTime.minute, nextTime.second);

	return 0;
}

//Function to update time by one second

struct time timeUpdate( struct time now)
{
	++now.second;

	if( now.second == 60)
	{
		now.second = 0;
		++now.minute;
	}

	if( now.minute == 60)
	{
		now.minute = 0;
		++now.hour;
	}

	if( now.hour == 24)
	{
		now.hour = 0;
	}

	return now;

}