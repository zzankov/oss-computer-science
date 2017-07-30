#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main (int argc, char *argv[])
{
    float strToFloat (char str[]);
    char num[50];
    printf ("Give me your integer: ");
    scanf ("%s", num);
    printf ("%f\n", strToFloat(num));
    printf ("%f\n", strToFloat(num) + 25);

    return 0;
}

float strToFloat (char str[])
{
    float result = 0;
    bool neg = false;
    char *dec = str;

    if (*str == '-') {
        neg = true;
        str++;
    }

    while (*dec != '.' && *dec)
        dec++;

    while ((*str >= '0' && *str <= '9') || *str == '.') {
        if ( str != dec ) {
            printf ("%li\n", dec - str);
            result += (*str - '0') * pow(10, dec - str - (dec > str));
        }
        str++;        
    }

    if (neg)
        return result * -1;
    else
        return result;
}
