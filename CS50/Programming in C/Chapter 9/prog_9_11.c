#include <stdio.h>
#include <stdlib.h>

int strToInt (const char str[])
{
    int result = 0;

    for ( int i = 0; str[i] >= '0' && str[i] <= '9'; i++ )
        result = result * 10 + str[i] - '0';
    return result;
}

int main (int argc, char *argv[])
{
    /*
    int strToInt (const char str[]);

    printf ("%i\n", strToInt("245"));
    printf ("%i\n", strToInt("100") + 25);
    printf ("%i\n", strToInt("13x5"));
    */
    printf ("%i\n", atoi("245"));
    printf ("%i\n", atoi("100") + 25);
    printf ("%i\n", atoi("13x5"));

    return 0;
}