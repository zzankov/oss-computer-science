#include <stdio.h>

#define ABS(x) ((x) < 0 ? -(x) : (x))

int main (int argc, char *argv[])
{
    printf ("ABS(%i) = %i\n", 5, ABS(5));
    printf ("ABS(%i) = %i\n", -5, ABS(-5));
    printf ("ABS(%i) = %i\n", 5 + 10, ABS(5 + 10));
    printf ("ABS(%i) = %i\n", -5 * 10, ABS(-5 * 10));

    return 0;
}