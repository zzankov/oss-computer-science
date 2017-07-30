#include <stdio.h>

int main (int argc, char *argv[])
{
    struct date 
    {
        int month;
        int day;
        int year;
    } today, *datePtr;

    datePtr = &today;

    datePtr->month = 9;
    datePtr->day = 25;
    datePtr->year = 2017;

    printf ("Today is %02i/%02i/%04i.\n", today.month, today.day,
        today.year);

    return 0;
}