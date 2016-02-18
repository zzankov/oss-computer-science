// program to update the time by one second
# include <stdio.h>

struct time
{
    int   hour;
    int   minute;
    int   second;
};
int main(void)
{
    // prototype function
    struct time  timeUpdate (struct time  now);
    
    struct time  currentTime, nextTime;

    printf ("Enter the time (hh:mm:ss): ");
    scanf  ("%i:%i:%i", &currentTime.hour, &currentTime.minute,
            &currentTime.second);
    nextTime = timeUpdate (currentTime);
    printf ("Updated time is %.2i:%.2i:%.2i\n", nextTime.hour, nextTime.minute,
            nextTime.second);
    return 0;
}

// function to update the time by one second
struct time timeUpdate (struct time  now)
{
    ++now.second;

    if ( now.second == 60 ) {           // next minute
        now.second = 0;
        ++now.minute;
        if ( now.minute == 60 ) {       // next hour
            now.minute = 0;
            ++now.hour;
            if ( now.hour == 24 )       // midnight
                now.hour = 0;
        }
    }
    return now;
}
