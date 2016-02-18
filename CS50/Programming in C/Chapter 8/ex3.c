# include <stdio.h>

// declare a global structure
struct time
{
    int   hour;
    int   minute;
    int   second;
};

// function to calculate the time difference between two points in time
struct time   elapsedTime (struct time time1, struct time time2)
{
    struct time   result = { 0, 0, 0 };

    result.second = time2.second - time1.second;
    result.minute = time2.minute - time1.minute;
    result.hour = time2.hour - time1.hour;

    if (result.second < 0) {
        result.second += 60;
        result.minute -= 1;
    }
    if (result.minute < 0) {
        result.minute += 60;
        result.hour -= 1;
    }
    if (result.hour < 0 )
        result.hour += 24;
    return result;
}

// main function
int main(void)
{
    struct time time1;
    struct time time2;
    struct time timeDiff;

    printf ("Time 1: ");
    scanf  ("%i:%i:%i", &time1.hour, &time1.minute, &time1.second);
    printf ("Time 2: ");
    scanf  ("%i:%i:%i", &time2.hour, &time2.minute, &time2.second);

    timeDiff = elapsedTime(time1, time2);

    printf ("The time difference between %.2i:%.2i:%.2i and %.2i:%.2i:%.2i is",
            time1.hour, time1.minute, time1.second, 
            time2.hour, time2.minute, time2.second);

    printf (" %i hours, %i minutes and %i seconds.\n", timeDiff.hour,
            timeDiff.minute, timeDiff.second);

    return 0;
}
