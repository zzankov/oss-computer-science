#include <stdio.h>
#include <stdlib.h>

struct date {
    int month;
    int day;
    int year;
};

int main (int argc, char *argv[])
{
    long int N(struct date d);
    int weekday(struct date d);
    struct date d;
    const char *days[] = {"Sunday", "Monday", "Tuesday",
        "Wednesday", "Thursday", "Friday", "Saturday"};

    printf ("Give me a date (mm dd yyyy): ");
    scanf ("%i %i %i", &d.month, &d.day, &d.year);

    printf ("The date %.2i/%.2i/%.4i falls on %s.\n", 
        d.month, d.day, d.year, days[weekday(d)]);

    return 0;
}

long int N(struct date d) {
    return 1461 * (d.month <= 2 ? d.year - 1 : d.year) / 4 
        + 153 * (d.month <= 2 ? d.month + 13 : d.month + 1) / 5
        + d.day;
}

int weekday(struct date d) {
    long int N(struct date d);
    return (N(d) - 621049) % 7;
}