// Program to print the number of days in a month

#include <stdio.h>

int main (int argc, char *argv[])
{
    enum month {January = 1, February, March, April, May, June, 
        July, August, September, October, November, December};
    enum month aMonth;
    int days;

    printf ("Enter month number: ");
    scanf("%u", &aMonth);

    switch (aMonth) {
        case January:
        case March:
        case May:
        case July:
        case August:
        case October:
        case December:
            days = 31;
            break;

        case April:
        case June:
        case September:
        case November:
            days = 30;
            break;
        
        case February:
            days = 28;
            break;
        
        default:
            printf ("Bad month number\n");
            days = 0;
            break;
    }

    if (days)
        printf ("Number of days is %i\n", days);
    
    if (aMonth == February)
        printf ("...or 29 if it is a leap year\n");

    return 0;
}