#include <stdio.h>

int main (void)
{
    struct date
    {
        int month;
        int day;
        int year;
    };
    struct date today, *datePtr;
    datePtr = &today;
    datePtr->month = 9;
    datePtr->day = 25;
    datePtr->year = 2015;
    printf("Today's date is %.2i/%.2i/%.4i\n",
            datePtr->month, datePtr->day, datePtr->year);
    return 0;
}
