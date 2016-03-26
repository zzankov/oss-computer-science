# include <stdio.h>

// function to get the length of an integer in binary terms
int bin_size (unsigned int n)
{
    int i = 0;

    while ( n )
    {
        i++;
        n /= 2;
    }
    return i;
}

// function to extract the rightmost n bits from an int
int extract_n_bits (int pattern, int bits)
{
    int mask = 0;

    for (int i = 0; i < bits; i++)
        mask |= 1 << i;

    return pattern & mask;
}

// function to turn specific bits of an integer off by specifying a starting
// point (0 for leftmost bit) and a number of bits to be set to 0
unsigned int *turn_bits_off(unsigned int *source, int start, int bits)
{
    int mask = 0;
    int size = bin_size(*source);

    // assign mask
    for (int i = 0; i < bits; i++)
        mask |= 1 << i;
    mask <<= (size - start - bits);

    *source &= ~mask;   // the mask is used as ~mask in to turn off the bits

    return source;      // returns a pointer just in case
}

// function to set specific bits of an integer to a desired target bits. the
// place and numbers of bits to be changed is specified by start and bits
// arguments (0 is the leftmost bit of the int). The target mask is truncated
// into the number of bits that are specified to be changed. 
unsigned int *bitpat_set (unsigned int *source, unsigned int target, 
        int start, int bits)
{
    int size = bin_size(*source);
    // set target mask
    target = extract_n_bits(target, bits);
    target <<= (size - start - bits);

    // set bits off
    turn_bits_off(source, start, bits);

    // set intended source bits to the target mask
    *source |= target;
    return source;
}

int main(void)
{
    unsigned int a = 1000;
    printf ("%i\n", a);
    bitpat_set(&a, 3, 0, 2);
    printf ("%i\n", a);
    return 0;
}
