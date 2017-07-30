// Program to illustrate a structure
#include <stdio.h>

int main (int argc, char *argv[])
{
    struct date {
        int month;
        int day;
        int year;
    };

    struct date today;

    today.month = 9;
    today.day = 25;
    today.year = 2015;

    printf ("Today's date is %.2i/%.2i/%.4i.\n", today.month, today.day,
        today.year);

    return 0;
}