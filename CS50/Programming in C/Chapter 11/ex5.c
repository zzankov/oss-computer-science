#include <stdio.h>
#include <stdlib.h>

_Bool bit_test(unsigned int word, int n)
{
    return word & 1 << n;
}

unsigned int bit_set(unsigned int word, int n)
{
    return word | 1 << n;
}

int main (int argc, char *argv[])
{
    printf ("%i\n", bit_test(atoi(argv[1]), atoi(argv[2])));
    printf ("%i\n", bit_set(atoi(argv[1]), atoi(argv[2])));
    printf ("%i\n", bit_test(bit_set(atoi(argv[1]), 
            atoi(argv[2])), 
        atoi(argv[2])));

    return 0;
}