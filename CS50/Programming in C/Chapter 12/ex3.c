#include <stdio.h>

#define MIN(x,y) ((x) < (y) ? (x) : (y))

int main (int argc, char *argv[])
{
    int a = 5, b = 6;
    printf ("MIN(%i,%i) = %i\n", a, b, MIN(a, b));

    return 0;
}