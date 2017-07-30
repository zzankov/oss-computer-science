#include <stdio.h>
#include <stdbool.h>

int strToInt (const char str[])
{
    int result = 0;
    int i = 0;
    bool neg = false;
    if (*str == '-') {
        neg = true;
        i = 1;
    }

    for ( ; str[i] >= '0' && str[i] <= '9'; i++ )
        result = result * 10 + str[i] - '0';
    if (neg)
        return result * -1;
    else
        return result;
}

int main (int argc, char *argv[])
{
    int strToInt (const char str[]);
    char num[50];
    printf ("Give me your integer: ");
    scanf ("%s", num);
    printf ("%i\n", strToInt(num));
    printf ("%i\n", strToInt(num) + 25);

    return 0;
}