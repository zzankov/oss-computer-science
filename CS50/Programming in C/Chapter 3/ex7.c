#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[])
{
    printf ("%E\n", 
        (3.31 * pow(10, -8) * 2.01 * pow(10, -7)) / 
        (7.16 * pow(10, -6) + 2.01 * pow(10, -8))
    );

    return 0;
}