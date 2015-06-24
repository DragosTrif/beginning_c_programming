/* Write a function called clocKeeper() that
takes as it argument date_and_time structure as
defined in this chapter.The function shuld call
the timeUpdate() and if it reaches midnight, the 
function shuld call the dateUpdate() to switch over 
to the next day.Have the function to return the updated
date_and_time structure*/
 
#include <stdio.h>
#include <stdbool.h>
 
struct date
{
    int month;
    int day;
    int year;
};
 
struct time
{
    int second;
    int minute;
    int hour;
};
 
 
struct date_and_time
{
    struct date sdate;
    struct time stime;
};

 
struct time time_update( struct time now)
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

bool is_leap_year( int year )
{
 
    if(( year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        return true;
 
    }
 
    return false;
}

int number_of_days(struct date d)
{
    int days;
 
    const int days_per_month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
 
    if( is_leap_year(d.year) && d.month == 2)
    {
        days = 29;
    }
 
    else
    {
        days = days_per_month[d.month - 1];
    }
 
    return days;
}

 
struct date date_update(struct date today)
{
    struct date tomorow;
    
    if(today.day != number_of_days(today))
    {
        tomorow.day = today.day + 1;
        tomorow.month = today.month;
        tomorow.year = today.year;
    }
 
    else if( today.month == 12)
    {
        tomorow.day = 1;
        tomorow.month = 1;
        tomorow.year = today.year+1;
    }
 
    else
    {
        tomorow.day = 1;
        tomorow.month = today.month + 1;
        tomorow.year = today.month;
    }
 
 
    return tomorow;
            
    
}

struct date_and_time clock_kepper( struct date_and_time d )
{
   
        d.stime = time_update(d.stime);
    if (( d.stime.hour == 0) && ( d.stime.minute == 0) && 
        ( d.stime.second == 0))
        {
            d.sdate = date_update(d.sdate);
        }   

 
    return d;
 
}

 
int main(void)
{
    struct date today;
    struct time now;
    struct date_and_time up;


 
    printf("Give me the time(hh:mm:ss)");
    scanf(" %d:%d:%d", &now.hour, &now.minute, &now.second);
    
    printf("Give the date(dd:mm:yyyy)");
    scanf(" %d: %d:%d", &today.day, &today.month, &today.year);
    

    up.sdate = today;
    up.stime = now;

    printf("%d %d %d", up.sdate.day, up.sdate.month, up.sdate.year);
    printf("\n");
    printf("%d %d %d", up.stime.hour, up.stime.minute, up.stime.second);
    printf("\n");
 
 

    up = clock_kepper(up);


    printf("%d %d %d", up.sdate.day, up.sdate.month, up.sdate.year);
    printf("\n");
    printf("%d %d %d", up.stime.hour, up.stime.minute, up.stime.second);
           
    return 0;
}