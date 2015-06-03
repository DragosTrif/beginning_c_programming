/*Write function elapsed time that takes as it arguments 
two time structures and returns a time structure that
represents the elapsed time in hours minutes and seconds.
Be carefull with times that cross midnight
formula for converting seconds in seconds minutes hours:
hours = seconds / 3600
minutes = ( seconds / 60) % 60
seconds = seconds % 60.

*/

#include <stdio.h>

struct time
{
	int hour;
	int minute;
	int second;
};

int main(void)
{
	struct time  time3;

	//struct time get_time(struct time d);
	//struct time elapsed_time(struct time d, struct time e);

	int  convert_to_seconds(struct time d);
	int elapsed_time(int d, int e);
	struct time conver_to_normal_time(int a);

	struct time time1 =  { 3, 45,15};

	struct time time2 = { 9,  44, 03};
	int a, b, c;

	a = convert_to_seconds(time1);
	b = convert_to_seconds(time2);

	c = elapsed_time(a, b);

	time3 = conver_to_normal_time(c);

	printf(" %d:%d:%d", time3.hour, time3.minute, time3.second);


	

	return 0;
}

struct time get_time(struct time d)
{
	printf("Give me the time\n");
	scanf(" %d:%d:%d", &d.hour, &d.minute, &d.second);

	
}

int  convert_to_seconds(struct time d)
{
	struct time time1_seconds;
	int totalTime1_seconds;

	time1_seconds.hour = d.hour * 3600;
	time1_seconds.minute = d.second*60;
	time1_seconds.second = d.second;

	totalTime1_seconds = time1_seconds.hour + time1_seconds.minute + time1_seconds.second;

	return totalTime1_seconds;
}

int elapsed_time(int d, int  e)
{
	int result;
	
	result = d - e;
	
	

	

	return result;
}

struct time conver_to_normal_time(int a)
{
	struct time final_elapse_time;

	final_elapse_time.hour = a / 3600;
	final_elapse_time.minute = (a / 60) % 60;
	final_elapse_time.second = a % 60;

	return final_elapse_time;
}