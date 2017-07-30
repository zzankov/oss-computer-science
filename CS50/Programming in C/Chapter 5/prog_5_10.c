// Program to generate a table of prime numbers

#include <stdio.h>

int main (int argc, char *argv[])
{
    _Bool isPrime;

    for (int p = 2; p <= 50; ++p) {
        isPrime = 1;

        for (int d = 2; d < p; ++d)
            if ( p % d == 0)
                isPrime = 0;
        
        if (isPrime)
            printf ("%i ", p);
    }

    printf ("\n");

    return 0;
}