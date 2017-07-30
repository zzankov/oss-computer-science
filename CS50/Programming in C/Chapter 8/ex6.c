#include <stdio.h>

struct time {
    int hour;
    int minutes;
    int seconds;
};

int main (int argc, char *argv[])
{
    struct time elapsedTime (struct time t1, struct time t2);
    struct time t1 = {3, 45, 15};
    struct time t2 = {9, 44, 3};
    struct time diff;

    diff = elapsedTime(t1, t2);
    printf ("Diff t2 - t1 = %.2i:%.2i:%.2i\n", diff.hour, diff.minutes, diff.seconds);
    diff = elapsedTime(t2, t1);
    printf ("Diff t1 - t2 = %.2i:%.2i:%.2i\n", diff.hour, diff.minutes, diff.seconds);

    return 0;
}

struct time elapsedTime (struct time t1, struct time t2)
{
    return (struct time) {
		.hour = ((t2.hour - t1.hour) < 0) ? t2.hour - t1.hour + 24 : t2.hour - t1.hour,
    	.minutes = ((t2.minutes - t1.minutes) < 0) ? t2.minutes - t1.minutes + 60 : t2.minutes - t1.minutes,
    	.seconds = ((t2.seconds - t1.seconds) < 0) ? t2.seconds - t1.seconds + 60 : t2.seconds - t1.seconds
	};
}