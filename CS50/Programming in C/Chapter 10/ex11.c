#include <stdio.h>

struct date 
{
    int month;
    int day;
    int year;
};

_Bool isLeap(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

void dateUpdate (struct date *d)
{
    int days[12] = 
        {31, 28 + isLeap(d->year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (++d->day % days[d->month-1] == 1)
    {
        d->day = d->day % days[d->month-1];
        if (++d->month % 12 == 1)
        {
            d->month = d->month % 12;
            d->year++;
        }
    }
}

int main (int argc, char *argv[])
{
    struct date d = {2, 28, 2016};

    printf ("Date before update: %2i/%2i/%4i\n", d.month, d.day, d.year);
    dateUpdate(&d);
    printf ("Date after update: %2i/%2i/%4i\n", d.month, d.day, d.year);
} 