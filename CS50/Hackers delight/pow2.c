# include <stdio.h>

int isPowerOfTwo (unsigned int x)
{
    return ( !(x & (x - 1)) );
}

int main(void)
{
    int     num;
    printf ("Give me a number: ");
    while ( num != 999 ) {
        scanf  ("%i", &num);
        printf ("%i\n", isPowerOfTwo(num));
    }

    return 0;
}
