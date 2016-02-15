// Program to illustrate a structure

# include <stdio.h>

int main (void)
{
    // define structure
    struct date
    {
        int   month;
        int   day;
        int   year; 
    };

    struct date   today; // initiate variable

    today.month = 9;
    today.day = 20;
    today.year = 2015;

    printf ("Today's date is %i/%i/%.2i.\n", today.month, today.day,
            today.year % 100);

    return 0;
}
