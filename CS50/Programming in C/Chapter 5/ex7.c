// Program to generate a table of prime numbers

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main (int argc, char *argv[])
{
    int sqroot;
    bool isPrime;

    printf ("2 ");
    for ( int d = 3; d <= 50; d += 2) {
        isPrime = true;
        sqroot = (int)sqrt(d) + 1;
        for (int p = 2; p <= sqroot; ++p)
            if ( d % p == 0)
                isPrime = false;
        
        if (isPrime)
            printf ("%i ", d);
    }
    
    printf ("\n");

    return 0;

}