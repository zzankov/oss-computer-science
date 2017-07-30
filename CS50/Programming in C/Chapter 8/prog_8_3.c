// Program to determine tomorrow's date
#include <stdio.h>
#include <stdbool.h>

struct date {
    int month;
    int day;
    int year;
};

int main (int argc, char *argv[])
{
    struct date today, tomorrow;
    int numberOfDays (struct date d);

    printf ("Enter today's date (mm dd yyyy): ");
    scanf("%i %i %i", &today.month, &today.day, &today.year);

    if (today.day != numberOfDays (today)) {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    } else if (today.month == 12) {
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    } else {
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }

    printf ("Tomorrow's date is %.2i/%.2i/%.4i.\n", tomorrow.month, 
        tomorrow.day, tomorrow.year);
    
    return 0;
}

// Function to find the number of days in a month
int numberOfDays(struct date d) {
    int days;
    bool isLeap(struct date d);
    const int daysPerMonth[12] = 
        {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return daysPerMonth[d.month - 1] + (d.month == 2 ? isLeap(d) : 0); 
}

// Function to determine if a year is leap
bool isLeap(struct date d) {
    return ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0);
}