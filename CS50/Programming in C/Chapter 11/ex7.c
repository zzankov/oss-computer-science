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

int bitpat_get (unsigned int source, int start, int bits)
{
    int size = bin_size(source);
    int result = source >> (size - start - bits);
    result = extract_n_bits(result, bits);
    result = result << (size - start - bits);
    return result;
}

int main(void)
{
    int n1 = 0xe1f4;
    printf ("%i\n", n1);
    int extract = bitpat_get(n1, 12, 3);
    printf ("%i\n", extract);
    return 0;
}
