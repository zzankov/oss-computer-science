#include <stdio.h>
#include <stdlib.h>


void bin_print(int n)
{
    int sz = sizeof(n) * 8;

    for (int i = sz - 1 ; i >= 0; i--)
        printf ("%c", abs(n >> i & 1) + '0');

    printf("\n");
}

int int_size(void)
{
    int n = ~0;
    int bits = 0;

    while ( n < 0 )
        n <<= 1, bits++;

    return bits;
}

int rotate(int n, int times)
{
    int int_size(void);
    int intSize = int_size();
    int result, bits;

    // trim times if too large
    if (times > 0)
        times %= intSize;
    else
        times = -(-times % intSize);
    
    if (times == 0)
        result = n;
    else if (times > 0) {
        bits = n >> (intSize - times);
        result = n << times | bits;
    } else {
        times = -times;
        bits = n << (intSize - times);
        result = n >> times | bits;
    }

    return result;
}

int main (int argc, char *argv[])
{
    // check number of arguments
    if (argc != 3)
    {
        printf ("Incorrect number of arguments! Two integer values expected\n");
        return EXIT_FAILURE;
    }

    // declare functions and variables
    void bin_print(int n);
    int rotate(int n, int times);
    int num = atoi(argv[1]);
    int rot = atoi(argv[2]);

    printf ("Your original number in binary format: ");
    bin_print(num);
    printf ("Your number rotated by %i: ", rot);
    bin_print(rotate(num, rot));
    
    return 0;
}