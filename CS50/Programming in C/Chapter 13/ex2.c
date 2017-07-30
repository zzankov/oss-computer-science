#include <stdio.h>

enum month
{
    January = 0, February, March, April, May, June,
    July, August, September, October, November, December
};

char *monthName (enum month mth)
{
    char *mName[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    return mName[mth];
}

int main (int argc, char *argv[])
{
    enum month aMonth = February;

    printf ("%s\n", monthName(aMonth));

    return 0;
}