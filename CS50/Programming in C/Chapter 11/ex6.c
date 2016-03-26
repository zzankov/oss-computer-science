# include <stdio.h>

int bin_size (unsigned int n)
{
    int result = 0;

    while ( n )
    {
        result++;
        n /= 2;
    }
    return result;
}
int extract_n_bits (int pattern, int bits)
{
    int mask = 0;

    for (int i = 0; i < bits; i++)
        mask |= 1 << i;

    return pattern & mask;
}

int bitpat_search (unsigned int source, int pattern, int n)
{
    int size = bin_size(source);
    int mask = extract_n_bits(pattern, n);
    for ( int i = 0; i < size - n; i++ )
        if (extract_n_bits(source  >> (size - n - i), n) == mask)
            return i;
    return -1;
}

int main(void)
{
    int pattern = 0x5;
    unsigned int source = 0xe1f4;
    int bits = 3;
    printf ("%i\n",bitpat_search(source, pattern, bits));
    return 0;
}
