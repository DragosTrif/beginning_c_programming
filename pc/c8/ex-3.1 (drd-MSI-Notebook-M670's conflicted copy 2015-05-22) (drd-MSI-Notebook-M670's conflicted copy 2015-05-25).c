#include <stdio.h>

struct time
{
	int hour;
	int minute;
	int second;
};

int main(void)
{
	

	struct time get_time(struct time d);
	//struct time elapsed_time(struct time d, struct time e);

	int  convert_to_seconds(struct time d);
	int elapsed_time(int d, int e);
	struct time conver_to_normal_time(int a);

	//struct time original_time;// =  { 3, 45,15};

	//struct time second_time; //= { 9,  44, 03};
	struct time final_elapsed_time;
	int original_time_seconds, second_time_seconds, elapsed_time_seconds;

	struct time original_time = get_time(original_time);
	printf("%d %d %d", original_time.hour, original_time.minute, original_time.second);
	struct time second_time   =   get_time(second_time);

	original_time_seconds = convert_to_seconds(original_time);
	second_time_seconds = convert_to_seconds(second_time);

	elapsed_time_seconds = elapsed_time(original_time_seconds, second_time_seconds);

	final_elapsed_time = conver_to_normal_time( elapsed_time_seconds);

	printf(" %d:%d:%d", final_elapsed_time.hour, final_elapsed_time.minute, final_elapsed_time.second);


	

	return 0;
}

struct time get_time(struct time d)
{
	printf("Give me the time(hh:mm/:ss)\n");
	scanf(" %d:%d:%d", &d.hour, &d.minute, &d.second);

	if(( d.hour == 0) && (d.minute == 0) && (d.second == 0))
	{
		d.hour = 24;
	}

	while((d.hour > 23) || (d.minute > 60) || (d.minute > 61))
	{

		printf(" incorect data input\n");
		scanf(" %d:%d:%d", &d.hour, &d.minute, &d.second);
	}

	return d;

	
}

int  convert_to_seconds(struct time d)
{
	

	return  d.hour * 60 * 60 + d.minute * 60 + d.second;
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