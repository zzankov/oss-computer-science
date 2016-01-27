# include <stdio.h>
# include <stdlib.h>

int main(void)
{
    int     *primes;
    primes = malloc(150 * sizeof(int));
    int     i, j;

    for ( i = 0; i < 150; i++ )
        primes[i] = i;

    for ( i = 2; i < 150; i++ ) {
        if ( primes[i] != 0 )
            for ( j = 2; j < 150; j++ ) {
                if ( primes[ j * primes[i]] > 150 )
                    break;
                primes[ j * primes[i] ] = 0;
            }
    }
    
    for ( i = 0; i < 150; i++ )
        if ( primes[i] != 0 )
            printf ("%i ", primes[i]);

    printf ("\n");

    return 0;
}
