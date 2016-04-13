# include <stdio.h>
# define mth(X) #X

//char *months[] = { "January", "February", "March", "April", "June",
//    "July", "August", "September", "October", "November", "December" };

enum month { January = 1, February, March, April, May, June,
    July, August, September, October, November, December };

char *monthName(enum month aMonth) {
    switch (aMonth) {
        case January:
            return "January";
        case February:
            return "February";
        case March:
            return "March";
        case April:
            return "April";
        case May:
            return "May";
        case June:
            return "June";
        case July:
            return "July";
        case August:
            return "August";
        case September:
            return "September";
        case October:
            return "October";
        case November:
            return "November";
        case December:
            return "December";
        default:
            return "Invalid month";
    }
}
int main(void) 
{  

    enum month  aMonth;
    printf ("Enter month number: ");
    scanf  ("%i", &aMonth);

    //printf ("%s\n", months[aMonth]);
    printf ("%s\n", monthName(aMonth));

    return 0;
}
