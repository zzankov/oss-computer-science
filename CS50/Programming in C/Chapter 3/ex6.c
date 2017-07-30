#include <stdio.h>

long double power (double num, int pow) {
    double result = 1;

    for (int i = 0; i < pow; i++)
        result *= num;

    return result;
}

int main (int argc, char *argv[])
{
    double x = 2.55;
    
    printf ("%Lg\n", 3 * power(x, 3) - 5 * power(x, 2) + 6);

    return 0;
}