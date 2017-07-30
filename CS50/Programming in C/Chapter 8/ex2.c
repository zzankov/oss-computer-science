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
    struct date d1, d2;

    printf ("Give me date 1 (mm dd yyyy): ");
    scanf ("%i %i %i", &d1.month, &d1.day, &d1.year);

    printf ("Give me date 2 (mm dd yyyy): ");
    scanf ("%i %i %i", &d2.month, &d2.day, &d2.year);

    printf ("N1 = %li\n", N(d1));
    printf ("N2 = %li\n", N(d2));

    return 0;
}

long int N(struct date d) {
    return 1461 * (d.month <= 2 ? d.year - 1 : d.year) / 4 
        + 153 * (d.month <= 2 ? d.month + 13 : d.month + 1) / 5
        + d.day;
}