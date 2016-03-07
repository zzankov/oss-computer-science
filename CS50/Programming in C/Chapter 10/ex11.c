// Program to determine tomorrow's date
# include <stdio.h>
# include <stdbool.h>
struct date
{
    int   month;
    int   day;
    int   year;
};

// Function to calculate tomorrow's date
void dateUpdate(struct date  *today)
{
    // prototype function
    int   numberOfDays(struct date  d);

    // run checks on today's date and update accordingly
    if ( today->day != numberOfDays(*today) ) {
        today->day++;
    }
    else if ( today->month == 12 ) {       // end of year
        today->day = 1;
        today->month = 1;
        today->year++;
    }
    else {
        today->day = 1;
        today->month++;
    }
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

int main(void)
{
    // prototype functions
    void dateUpdate (struct date  *today);
    
    // variables
    struct date thisDay;
    printf ("Enter today's date (mm dd yyyy): ");
    scanf  ("%i%i%i", &thisDay.month, &thisDay.day, &thisDay.year);
    dateUpdate(&thisDay);
    printf ("Tomorrow's date is %.2i/%.2i/%.2i.\n", thisDay.month, thisDay.day,
            thisDay.year % 100);
    return 0;
}
