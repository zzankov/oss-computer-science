#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
};

struct time {
    int hour;
    int minutes;
    int seconds;
};

struct DateTime {
    struct date d;
    struct time t;
};

// function to update date by 1 day
struct DateTime dateUpdate (struct DateTime dt) {
    int numberOfDays(struct DateTime dt);

    if ((dt.d.day = dt.d.day % numberOfDays(dt) + 1) == 1)
        if ((dt.d.month = dt.d.month % 12 + 1) == 1)
            dt.d.year++;

    return dt;
}

// function to check if a year is leap
_Bool isLeap (struct DateTime dt) {
    return ((!(dt.d.year % 4) && (dt.d.year % 100)) || !(dt.d.year % 400));
}

// Function to find the number of days in a month
int numberOfDays(struct DateTime dt) {
    int days;
    _Bool isLeap (struct DateTime dt);
    const int daysPerMonth[12] = 
        {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return daysPerMonth[dt.d.month - 1] + (dt.d.month == 2 ? isLeap(dt) : 0); 
}

// function to update time by 1 second
struct DateTime timeUpdate (struct DateTime dt) {
    struct DateTime dateUpdate (struct DateTime dt);
    !(dt.t.seconds = (dt.t.seconds + 1) % 60) ? 
        !(dt.t.minutes = (dt.t.minutes + 1) % 60) ? 
            !(dt.t.hour = (dt.t.hour + 1) % 24) ? 
                dt = dateUpdate(dt) : 
            (struct DateTime) {0} : 
        (struct DateTime) {0} : 
    (struct DateTime) {0};

    return dt;
}

void printDateTime(struct DateTime dt) {
    printf ("%.2i/%.2i/%.4i %.2i:%.2i:%.2i\n",
        dt.d.month, dt.d.day, dt.d.year, dt.t.hour, dt.t.minutes,
        dt.t.seconds);
}

int main (int argc, char *argv[])
{
    struct DateTime dt_array[4] = 
    {
        {{2,28,2016},{23,59,59}},
        {{12,31,2016},{23,59,59}},
        {{4,5,2017},{11,30,45}},
        {{7,6,2017},{13,50,59}}
    };

    for (int i = 0; i < 4; i++) {
        printDateTime(dt_array[i]);
        printDateTime(timeUpdate(dt_array[i]));
    };

    return 0;
}