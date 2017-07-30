#include <stdio.h>

int main (int argc, char *argv[])
{
    int count = 10, x;
    int *intPtr;

    intPtr = &count;
    x = *intPtr;

    printf ("count = %i, x = %i\n", count, x);

    return 0;
}