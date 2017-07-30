#include <stdio.h>

int int_size()
{
    int n = ~0;
    int bits = 0;

    while ( n < 0 )
        n <<= 1, bits++;

    return bits;
}

int bitpat_get(unsigned int word, int start, int bit_count)
{
    int counter = 0;
    int intSize = int_size();
    int mask = ((unsigned int)~0 >> (intSize - bit_count)) << (intSize - start - bit_count);

    // shift word to start at the first active bit
    while ((int)word > 0 && word != 0)
        word <<= 1;

    return (word & mask) >> (intSize - start - bit_count);
}

int main (int argc, char *argv[])
{
    printf ("%i\n", bitpat_get(123456, 0, 3));
    printf ("%i\n", bitpat_get(123456, 3, 5));

    return 0;
}