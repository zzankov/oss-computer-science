#include <stdio.h>

int int_size()
{
    int n = ~0;
    int bits = 0;

    while ( n < 0 )
        n <<= 1, bits++;

    return bits;
}

int main (int argc, char *argv[])
{
    printf ("An int contains %i bits.\n", int_size());

    return 0;
}