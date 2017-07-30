// program to update time by one second
#include <stdio.h>

struct time {
    int hour;
    int minutes;
    int seconds;
};

int main (int argc, char *argv[])
{
    struct time timeUpdate(struct time now);
    struct time currentTime, nextTime;

    printf ("Enter the time (hh:mm:ss): ");
    scanf ("%i:%i:%i", &currentTime.hour, &currentTime.minutes, 
        &currentTime.seconds);
    
    nextTime = timeUpdate(currentTime);

    printf ("Updated time is %.2i:%.2i:%.2i\n", nextTime.hour, 
        nextTime.minutes, nextTime.seconds);
    
    return 0;
}

// function to update time by 1 second
struct time timeUpdate (struct time now) {
    !(now.seconds = (now.seconds + 1) % 60) ? 
        !(now.minutes = (now.minutes + 1) % 60) ? 
            now.hour = (now.hour + 1) % 24 : 0 : 0;

    return now;
}