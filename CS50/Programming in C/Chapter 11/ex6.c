#include <stdio.h>

int int_size()
{
    int n = ~0;
    int bits = 0;

    while ( n < 0 )
        n <<= 1, bits++;

    return bits;
}

int bitpat_search(unsigned int source, int pattern, int n)
{
    int int_size();    
    unsigned int ptn = pattern, test;
    int counter = 0;
    int intSize = int_size();
    ptn = ptn & ((unsigned int)~0 >> (intSize - n));  // only take the rightmost n bits
    
    // push source to the left until the first active bit
    while ((int)source > 0 && source != 0)
        source <<= 1;

    do 
    {
        test = ((unsigned int)source >> (intSize - counter - n)) & (unsigned int)~0 >> intSize - n;
        if ( test == ptn )
            break;
        counter++;
    } while (counter < intSize - n);
    
    if (counter >= intSize - n)
        counter = -1;
    
    return counter;
}

int main (int argc, char *argv[])
{
    int bitpat_search(unsigned int source, int pattern, int n);
    
    printf ("%i\n", bitpat_search(0xe1f4, 0x5, 3));

    return 0;
}