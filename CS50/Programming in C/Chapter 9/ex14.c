#include <stdio.h>
#include <stdbool.h>

int intLen(int n) {
    int i;
    for ( i = 0; n != 0; i++, n /= 10) 
        ;

    return i;
}

char intToStr(int n, char result[])
{
    bool neg = n < 0;
    int intLen(int n);
    int intSize;
    intSize = intLen(n) + neg;

    if (neg)
        n = -n;

    result[intSize] = '\0';
    // printf ("%i\n", intSize);
    while (--intSize >= 0) {
        result[intSize] = (n % 10) + '0';
        n /= 10;
    }

    if (neg)
        *result = '-';
}

int main (int argc, char *argv[])
{
    int i;
    char num[100];
    printf ("Give me an integer: ");
    scanf ("%i", &i);

    intToStr(i, num);

    printf ("%s\n", num);

    return 0;
}