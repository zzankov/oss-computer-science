#include <stdio.h>

#define SHIFT(x,n) ((n) < 0 ? (x) >> -(n) : (x) << (n))

int main (int argc, char *argv[])
{
    printf ("SHIFT(%i,%i) = %i\n", 2, 5, SHIFT(2,5));
    printf ("SHIFT(%i,%i) = %i\n", 2, -1, SHIFT(2,-1));
    printf ("SHIFT(%i,%i) = %i\n", 2, 0, SHIFT(2,0));
}