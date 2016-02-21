# include <stdio.h>
# include <stdbool.h>

// declare structures
struct date
{
    int   month;
    int   day;
    int   year;
};

struct time
{
    int   hour;
    int   minute;
    int   second;
};

struct dateAndTime
{
    struct date   sdate;
    struct time   stime;
};

// Function to calculate tomorrow's date
struct date   dateUpdate(struct date  today)
{
    struct date   tomorrow;
    
    // prototype function
    int   numberOfDays(struct date  d);

    // run checks on today's date and update accordingly
    if ( today.day != numberOfDays(today) ) {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }
    else if ( today.month == 12 ) {       // end of year
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }
    else {
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }
    return tomorrow;
}

// Function to calculate the number of days in a month
int numberOfDays(struct date  d)
{
    int   days;

    // prototype function
    bool  isLeapYear (struct date d);
    const int daysPerMonth[12] = 
    { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    
    // run checks and apply leap year logic
    if ( isLeapYear (d) && d.month == 2 )
        days = 29;
    else
        days = daysPerMonth[d.month - 1];
    return days;
}

// Function to determine whether a year is leap or not
bool isLeapYear(struct date d)
{
    bool leapYearFlag;
    if ( (d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0 )
        leapYearFlag = true;    // the year is leap
    else
        leapYearFlag = false;   // not a leap year
    return leapYearFlag;
}

// function to update the time by one second
struct time timeUpdate (struct time  now)
{
    ++now.second;

    if ( now.second == 60 ) {           // next minute
        now.second = 0;
        ++now.minute;
        if ( now.minute == 60 ) {       // next hour
            now.minute = 0;
            ++now.hour;
            if ( now.hour == 24 )       // midnight
                now.hour = 0;
        }
    }
    return now;
}

// function to update a dateAndTime structure
struct dateAndTime clockKeeper(struct dateAndTime dt)
{
    // update time
    dt.stime = timeUpdate(dt.stime);

    // check if midnight
    if (dt.stime.hour == 0 && dt.stime.minute == 0 &&
            dt.stime.second ==0)
        dt.sdate = dateUpdate(dt.sdate);    //update date if so

    // return the updated dateAndTime structure
    return dt;
}
int main (void)
{
    struct dateAndTime a = 
    {
        {  2, 29, 2016 },
        { 23, 59, 58 } 
    };

    printf ("start at: %.2i/%.2i/%.2i %.2i:%.2i:%.2i\n",
            a.sdate.month, a.sdate.day, a.sdate.year % 100,
            a.stime.hour, a.stime.minute, a.stime.second);

    a = clockKeeper(a);

    printf ("update: %.2i/%.2i/%.2i %.2i:%.2i:%.2i\n",
            a.sdate.month, a.sdate.day, a.sdate.year % 100,
            a.stime.hour, a.stime.minute, a.stime.second);

    a = clockKeeper(a);

    printf ("update: %.2i/%.2i/%.2i %.2i:%.2i:%.2i\n",
            a.sdate.month, a.sdate.day, a.sdate.year % 100,
            a.stime.hour, a.stime.minute, a.stime.second);

    a = clockKeeper(a);

    printf ("update: %.2i/%.2i/%.2i %.2i:%.2i:%.2i\n",
            a.sdate.month, a.sdate.day, a.sdate.year % 100,
            a.stime.hour, a.stime.minute, a.stime.second);

    return 0;
}
